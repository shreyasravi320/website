#include "ocvrs_common.hpp"
#include <opencv2/freetype.hpp>
#include "freetype_types.hpp"

extern "C" {
	void cv_freetype_createFreeType2(Result<cv::Ptr<cv::freetype::FreeType2>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::freetype::FreeType2> ret = cv::freetype::createFreeType2();
			Ok(new cv::Ptr<cv::freetype::FreeType2>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::freetype::FreeType2>*>, ocvrs_return);
	}
	
	void cv_freetype_FreeType2_loadFontData_String_int(cv::freetype::FreeType2* instance, char* fontFileName, int idx, Result_void* ocvrs_return) {
		try {
			instance->loadFontData(std::string(fontFileName), idx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_freetype_FreeType2_setSplitNumber_int(cv::freetype::FreeType2* instance, int num, Result_void* ocvrs_return) {
		try {
			instance->setSplitNumber(num);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_freetype_FreeType2_putText_const__InputOutputArrayR_const_StringR_Point_int_Scalar_int_int_bool(cv::freetype::FreeType2* instance, const cv::_InputOutputArray* img, const char* text, cv::Point* org, int fontHeight, cv::Scalar* color, int thickness, int line_type, bool bottomLeftOrigin, Result_void* ocvrs_return) {
		try {
			instance->putText(*img, std::string(text), *org, fontHeight, *color, thickness, line_type, bottomLeftOrigin);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_freetype_FreeType2_getTextSize_const_StringR_int_int_intX(cv::freetype::FreeType2* instance, const char* text, int fontHeight, int thickness, int* baseLine, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getTextSize(std::string(text), fontHeight, thickness, baseLine);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	cv::Algorithm* cv_freetype_FreeType2_to_Algorithm(cv::freetype::FreeType2* instance) {
			return dynamic_cast<cv::Algorithm*>(instance);
	}
	
	void cv_freetype_FreeType2_delete(cv::freetype::FreeType2* instance) {
			delete instance;
	}
	
}
