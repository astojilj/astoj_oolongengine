/******************************************************************************

 @File         PFXParser.h

 @Title        PFX file parser.

 @Copyright    Copyright (C)  Imagination Technologies Limited.

 @Platform     Windows + Linux

 @Description  Declaration of PFX file parser

******************************************************************************/
#ifndef _PFXPARSER_H_
#define _PFXPARSER_H_


/*****************************************************************************
** Includes
******************************************************************************/

#include <string>
using namespace std;
//#include "Error.h"

/****************************************************************************
** Structures
****************************************************************************/
/*!**************************************************************************
@Struct SPFXParserHeader
@Brief  Struct for storing PFX file header data
****************************************************************************/
struct SPFXParserHeader
{
	char	*pszVersion;
	char	*pszDescription;
	char	*pszCopyright;
};

/*!**************************************************************************
@Struct SPFXParserTexture
@Brief  Struct for storing PFX data from the texture block
****************************************************************************/
struct SPFXParserTexture
{
	char			*pszName;
	char			*pszFile;
	unsigned int	nMin, nMag, nMIP;
	unsigned int	nWrapS, nWrapT, nWrapR;	// either GL_CLAMP or GL_REPEAT
};

/*!**************************************************************************
@Struct SPFXParserShader
@Brief  Struct for storing PFX data from the shader block
****************************************************************************/
struct SPFXParserShader
{
	char		*pszName;
	bool		bUseFileName;
	char		*pszGLSLfile;
	char		*pszGLSLBinaryFile;
	char		*pszGLSLcode;
	char		*pbGLSLBinary;
	unsigned int	nGLSLBinarySize;
	unsigned int	nFirstLineNumber;	// Line number in the text file where this code began; use to correct line-numbers in compiler errors
};

/*!**************************************************************************
@Enum ESemanticDefaultDataType
@Brief  Enum values for the various variable types supported
****************************************************************************/
enum ESemanticDefaultDataType
{
	eDataTypeMat2,
	eDataTypeMat3,
	eDataTypeMat4,
	eDataTypeVec2,
	eDataTypeVec3,
	eDataTypeVec4,
	eDataTypeIvec2,
	eDataTypeIvec3,
	eDataTypeIvec4,
	eDataTypeBvec2,
	eDataTypeBvec3,
	eDataTypeBvec4,
	eDataTypeFloat,
	eDataTypeInt,
	eDataTypeBool,

	eNumDefaultDataTypes,
	eDataTypeNone
};

/*!**************************************************************************
@Enum   EDefaultDataInternalType
@Brief  Enum values for defining whether a variable is float, interger or bool
****************************************************************************/
enum EDefaultDataInternalType
{
	eFloating,
	eInteger,
	eBoolean
};

struct SSemanticDefaultDataTypeInfo
{
	ESemanticDefaultDataType	eType;
	const char						*pszName;
	unsigned int				nNumberDataItems;
	EDefaultDataInternalType	eInternalType;
};

const static SSemanticDefaultDataTypeInfo c_psSemanticDefaultDataTypeInfo[] =
{
	{ eDataTypeMat2,		"mat2",			4,		eFloating },
	{ eDataTypeMat3,		"mat3",			9,		eFloating },
	{ eDataTypeMat4,		"mat4",			16,		eFloating },
	{ eDataTypeVec2,		"vec2",			2,		eFloating },
	{ eDataTypeVec3,		"vec3",			3,		eFloating },
	{ eDataTypeVec4,		"vec4",			4,		eFloating },
	{ eDataTypeIvec2,		"ivec2",		2,		eInteger },
	{ eDataTypeIvec3,		"ivec3",		3,		eInteger },
	{ eDataTypeIvec4,		"ivec4",		4,		eInteger },
	{ eDataTypeBvec2,		"bvec2",		2,		eBoolean },
	{ eDataTypeBvec3,		"bvec3",		3,		eBoolean },
	{ eDataTypeBvec4,		"bvec4",		4,		eBoolean },
	{ eDataTypeFloat,		"float",		1,		eFloating },
	{ eDataTypeInt,			"int",			1,		eInteger },
	{ eDataTypeBool,		"bool",			1,		eBoolean }
};

/*!**************************************************************************
@Struct SSemanticDefaultData
@Brief  Stores a default value
****************************************************************************/
struct SSemanticDefaultData
{
	float						pfData[16];
	int							pnData[4];
	bool						pbData[4];
	ESemanticDefaultDataType	eType;
};

/*!**************************************************************************
@Struct SPFXParserSemantic
@Brief  Stores semantic information
****************************************************************************/
struct SPFXParserSemantic
{
	char						*pszName;	/*!< The variable name as used in the shader-language code */
	char						*pszValue;	/*!< For example: LIGHTPOSITION */
	unsigned int				nIdx;		/*!< Index; for example two semantics might be LIGHTPOSITION0 and LIGHTPOSITION1 */
	SSemanticDefaultData	sDefaultValue; /*!< Default value */
};

/*!**************************************************************************
@Struct SPFXParserEffectTexture
@Brief  Stores effect texture information
****************************************************************************/
struct SPFXParserEffectTexture
{
	unsigned int				nNumber;	/*!<  Texture number to set */
	char						*pszName;	/*!<  Name of the texture to set there */
	unsigned int				u32Type;	/*!<  Identifying cube maps etc. */
};

/*!**************************************************************************
@Struct SPFXParserEffect
@Brief  Stores effect information
****************************************************************************/
struct SPFXParserEffect
{
	char						*pszName;
	char						*pszAnnotation;

	char						*pszVertexShaderName;
	char						*pszFragmentShaderName;

	SPFXParserSemantic			*psUniform;
	unsigned int				nNumUniforms, nMaxUniforms;

	SPFXParserSemantic			*psAttribute;
	unsigned int				nNumAttributes, nMaxAttributes;

	SPFXParserEffectTexture	*psTextures;
	unsigned int				nNumTextures, nMaxTextures;
};

class CPFXParserReadContext;

/*!**************************************************************************
@Class CPFXParser
@Brief PFX parser
****************************************************************************/
class CPFXParser
{
public:
	/*!***************************************************************************
	@Function			CPFXParser
	@Description		Sets initial values.
	*****************************************************************************/
	CPFXParser();

	/*!***************************************************************************
	@Function			~CPFXParser
	@Description		Frees memory used.
	*****************************************************************************/
	~CPFXParser();

	/*!***************************************************************************
	@Function			ParseFromMemory
	@Input				pszScript		PFX script
	@Output				pReturnError	error string
	@Return				EError		SUCCESS for success parsing file
									FAIL if file doesn't exist or is invalid
	@Description		Parses a PFX script from memory.
	*****************************************************************************/
	unsigned int ParseFromMemory(const char * const pszScript, string * const pReturnError);

	/*!***************************************************************************
	@Function			ParseFromFile
	@Input				pszFileName		PFX file name
	@Output				pReturnError	error string
	@Return				EError		PVR_SUCCESS for success parsing file
										PVR_FAIL if file doesn't exist or is invalid
	@Description		Reads the PFX file and calls the parser.
	*****************************************************************************/
	unsigned int ParseFromFile(const char * const pszFileName, string * const pReturnError);

	/*!***************************************************************************
	@Function			DebugDump
	@Description		Debug output.
	*****************************************************************************/
	void DebugDump() const;


    SPFXParserHeader	m_sHeader;

	SPFXParserTexture	*m_psTexture;
	unsigned int			m_nNumTextures, m_nMaxTextures;

	SPFXParserShader	*m_psFragmentShader;
	unsigned int			m_nNumFragShaders, m_nMaxFragShaders;
	SPFXParserShader	*m_psVertexShader;
	unsigned int			m_nNumVertShaders, m_nMaxVertShaders;

	SPFXParserEffect	*m_psEffect;
	unsigned int			m_nNumEffects, m_nMaxEffects;

private:
	CPFXParserReadContext	*m_psContext;

	/*!***************************************************************************
	@Function			Parse
	@Output				pReturnError	error string
	@Return				bool			true for success parsing file
	@Description		Parses a loaded PFX file.
	*****************************************************************************/
	bool Parse(string * const pReturnError);

	/*!***************************************************************************
	@Function		ReduceWhitespace
	@Output		        line		output text
	@Input			line		input text
	@Description		Reduces all white space characters in the string to one
					blank space.
	*****************************************************************************/
	void ReduceWhitespace(char *line);

	/*!***************************************************************************
	@Function		GetEndTag
	@Input			pszTagName		tag name
	@Input			nStartLine		start line
	@Output			pnEndLine		line end tag found
	@Return			true if tag found
	@Description		Searches for end tag pszTagName from line nStartLine.
				    Returns true and outputs the line number of the end tag if
				    found, otherwise returning false.
	*****************************************************************************/
	bool GetEndTag(char *pszTagName, int nStartLine, int *pnEndLine);

	/*!***************************************************************************
	@Function			ParseHeader
	@Input				nStartLine		start line number
	@Input				nEndLine		end line number
	@Output				pReturnError	error string
	@Return				bool			true if parse is successful
	@Description		Parses the HEADER section of the PFX file.
	*****************************************************************************/
	bool ParseHeader(int nStartLine, int nEndLine, string * const pReturnError);

	/*!***************************************************************************
	@Function			ParseTextures
	@Input				nStartLine		start line number
	@Input				nEndLine		end line number
	@Output				pReturnError	error string
	@Return				bool			true if parse is successful
	@Description		Parses the TEXTURE section of the PFX file.
	*****************************************************************************/
	bool ParseTextures(int nStartLine, int nEndLine, string * const pReturnError);

	/*!***************************************************************************
	@Function			ParseShader
	@Input				nStartLine		start line number
	@Input				nEndLine		end line number
	@Output				pReturnError	error string
	@Output				shader			shader data object
	@Input				pszBlockName	name of block in PFX file
	@Return				bool			true if parse is successful
	@Description		Parses the VERTEXSHADER or FRAGMENTSHADER section of the
						PFX file.
	*****************************************************************************/
	bool ParseShader(int nStartLine, int nEndLine, string *pReturnError, SPFXParserShader &shader, const char * const pszBlockName);

	/*!***************************************************************************
	@Function			ParseSemantic
	@Output				semantic		semantic data object
	@Input				nStartLine		start line number
	@Input				nEndLine		end line number
	@Output				pReturnError	error string
	@Return				bool			true if parse is successful
	@Description		Parses a semantic.
	*****************************************************************************/
	bool ParseSemantic(SPFXParserSemantic &semantic, const int nStartLine, const int nEndLine, string * const pReturnError);

	/*!***************************************************************************
	@Function			ParseEffect
	@Output				effect			effect data object
	@Input				nStartLine		start line number
	@Input				nEndLine		end line number
	@Output				pReturnError	error string
	@Return				bool			true if parse is successful
	@Description		Parses the EFFECT section of the PFX file.
	*****************************************************************************/
	bool ParseEffect(SPFXParserEffect &effect, const int nStartLine, const int nEndLine, string * const pReturnError);

};


#endif /* _PFXPARSER_H_ */

/*****************************************************************************
 End of file (PFXParser.h)
*****************************************************************************/
