#include "gapi.hpp"
#include "gapi_types.hpp"

extern "C" {
	void cv_descr_of_const_MatR(const cv::Mat* mat, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = cv::descr_of(*mat);
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_descr_of_const_MediaFrameR(const cv::MediaFrame* frame, Result<cv::GFrameDesc*>* ocvrs_return) {
		try {
			cv::GFrameDesc ret = cv::descr_of(*frame);
			Ok(new cv::GFrameDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GFrameDesc*>, ocvrs_return);
	}
	
	void cv_descr_of_const_RMatR(const cv::RMat* mat, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = cv::descr_of(*mat);
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_descr_of_const_ScalarR(const cv::Scalar* scalar, Result<cv::GScalarDesc*>* ocvrs_return) {
		try {
			cv::GScalarDesc ret = cv::descr_of(*scalar);
			Ok(new cv::GScalarDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalarDesc*>, ocvrs_return);
	}
	
	void cv_descr_of_const_UMatR(const cv::UMat* mat, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = cv::descr_of(*mat);
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_empty_array_desc(Result<cv::GArrayDesc*>* ocvrs_return) {
		try {
			cv::GArrayDesc ret = cv::empty_array_desc();
			Ok(new cv::GArrayDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GArrayDesc*>, ocvrs_return);
	}
	
	void cv_empty_gopaque_desc(Result<cv::GOpaqueDesc*>* ocvrs_return) {
		try {
			cv::GOpaqueDesc ret = cv::empty_gopaque_desc();
			Ok(new cv::GOpaqueDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GOpaqueDesc*>, ocvrs_return);
	}
	
	void cv_empty_scalar_desc(Result<cv::GScalarDesc*>* ocvrs_return) {
		try {
			cv::GScalarDesc ret = cv::empty_scalar_desc();
			Ok(new cv::GScalarDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalarDesc*>, ocvrs_return);
	}
	
	void cv_gapi_BGR2Gray_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::BGR2Gray(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_BGR2I420_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::BGR2I420(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_BGR2LUV_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::BGR2LUV(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_BGR2RGB_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::BGR2RGB(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_BGR2YUV_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::BGR2YUV(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_BayerGR2RGB_const_GMatR(const cv::GMat* src_gr, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::BayerGR2RGB(*src_gr);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_Canny_const_GMatR_double_double_int_bool(const cv::GMat* image, double threshold1, double threshold2, int apertureSize, bool L2gradient, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::Canny(*image, threshold1, threshold2, apertureSize, L2gradient);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_I4202BGR_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::I4202BGR(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_I4202RGB_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::I4202RGB(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_LUT_const_GMatR_const_MatR(const cv::GMat* src, const cv::Mat* lut, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::LUT(*src, *lut);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_LUV2BGR_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::LUV2BGR(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_Laplacian_const_GMatR_int_int_double_double_int(const cv::GMat* src, int ddepth, int ksize, double scale, double delta, int borderType, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::Laplacian(*src, ddepth, ksize, scale, delta, borderType);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_NV12toBGR_const_GMatR_const_GMatR(const cv::GMat* src_y, const cv::GMat* src_uv, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::NV12toBGR(*src_y, *src_uv);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_NV12toBGRp_const_GMatR_const_GMatR(const cv::GMat* src_y, const cv::GMat* src_uv, Result<cv::GMatP*>* ocvrs_return) {
		try {
			cv::GMatP ret = cv::gapi::NV12toBGRp(*src_y, *src_uv);
			Ok(new cv::GMatP(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatP*>, ocvrs_return);
	}
	
	void cv_gapi_NV12toGray_const_GMatR_const_GMatR(const cv::GMat* src_y, const cv::GMat* src_uv, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::NV12toGray(*src_y, *src_uv);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_NV12toRGB_const_GMatR_const_GMatR(const cv::GMat* src_y, const cv::GMat* src_uv, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::NV12toRGB(*src_y, *src_uv);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_NV12toRGBp_const_GMatR_const_GMatR(const cv::GMat* src_y, const cv::GMat* src_uv, Result<cv::GMatP*>* ocvrs_return) {
		try {
			cv::GMatP ret = cv::gapi::NV12toRGBp(*src_y, *src_uv);
			Ok(new cv::GMatP(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatP*>, ocvrs_return);
	}
	
	void cv_gapi_RGB2Gray_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::RGB2Gray(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_RGB2Gray_const_GMatR_float_float_float(const cv::GMat* src, float rY, float gY, float bY, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::RGB2Gray(*src, rY, gY, bY);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_RGB2HSV_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::RGB2HSV(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_RGB2I420_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::RGB2I420(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_RGB2Lab_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::RGB2Lab(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_RGB2YUV422_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::RGB2YUV422(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_RGB2YUV_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::RGB2YUV(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_SobelXY_const_GMatR_int_int_int_double_double_int_const_ScalarR(const cv::GMat* src, int ddepth, int order, int ksize, double scale, double delta, int borderType, const cv::Scalar* borderValue, Result<std::tuple<cv::GMat, cv::GMat>*>* ocvrs_return) {
		try {
			std::tuple<cv::GMat, cv::GMat> ret = cv::gapi::SobelXY(*src, ddepth, order, ksize, scale, delta, borderType, *borderValue);
			Ok(new std::tuple<cv::GMat, cv::GMat>(ret), ocvrs_return);
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::tuple<cv::GMat, cv::GMat>*>), ocvrs_return);
	}
	
	void cv_gapi_Sobel_const_GMatR_int_int_int_int_double_double_int_const_ScalarR(const cv::GMat* src, int ddepth, int dx, int dy, int ksize, double scale, double delta, int borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::Sobel(*src, ddepth, dx, dy, ksize, scale, delta, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_YUV2BGR_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::YUV2BGR(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_YUV2RGB_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::YUV2RGB(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_absDiffC_const_GMatR_const_GScalarR(const cv::GMat* src, const cv::GScalar* c, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::absDiffC(*src, *c);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_absDiff_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::absDiff(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_addC_const_GMatR_const_GScalarR_int(const cv::GMat* src1, const cv::GScalar* c, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::addC(*src1, *c, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_addC_const_GScalarR_const_GMatR_int(const cv::GScalar* c, const cv::GMat* src1, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::addC(*c, *src1, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_addWeighted_const_GMatR_double_const_GMatR_double_double_int(const cv::GMat* src1, double alpha, const cv::GMat* src2, double beta, double gamma, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::addWeighted(*src1, alpha, *src2, beta, gamma, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_add_const_GMatR_const_GMatR_int(const cv::GMat* src1, const cv::GMat* src2, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::add(*src1, *src2, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_bilateralFilter_const_GMatR_int_double_double_int(const cv::GMat* src, int d, double sigmaColor, double sigmaSpace, int borderType, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::bilateralFilter(*src, d, sigmaColor, sigmaSpace, borderType);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_bitwise_and_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::bitwise_and(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_bitwise_and_const_GMatR_const_GScalarR(const cv::GMat* src1, const cv::GScalar* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::bitwise_and(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_bitwise_not_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::bitwise_not(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_bitwise_or_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::bitwise_or(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_bitwise_or_const_GMatR_const_GScalarR(const cv::GMat* src1, const cv::GScalar* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::bitwise_or(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_bitwise_xor_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::bitwise_xor(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_bitwise_xor_const_GMatR_const_GScalarR(const cv::GMat* src1, const cv::GScalar* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::bitwise_xor(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_blur_const_GMatR_const_SizeR_const_PointR_int_const_ScalarR(const cv::GMat* src, const cv::Size* ksize, const cv::Point* anchor, int borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::blur(*src, *ksize, *anchor, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_boxFilter_const_GMatR_int_const_SizeR_const_PointR_bool_int_const_ScalarR(const cv::GMat* src, int dtype, const cv::Size* ksize, const cv::Point* anchor, bool normalize, int borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::boxFilter(*src, dtype, *ksize, *anchor, normalize, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cartToPolar_const_GMatR_const_GMatR_bool(const cv::GMat* x, const cv::GMat* y, bool angleInDegrees, Result<std::tuple<cv::GMat, cv::GMat>*>* ocvrs_return) {
		try {
			std::tuple<cv::GMat, cv::GMat> ret = cv::gapi::cartToPolar(*x, *y, angleInDegrees);
			Ok(new std::tuple<cv::GMat, cv::GMat>(ret), ocvrs_return);
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::tuple<cv::GMat, cv::GMat>*>), ocvrs_return);
	}
	
	void cv_gapi_cmpEQ_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpEQ(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpEQ_const_GMatR_const_GScalarR(const cv::GMat* src1, const cv::GScalar* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpEQ(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpGE_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpGE(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpGE_const_GMatR_const_GScalarR(const cv::GMat* src1, const cv::GScalar* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpGE(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpGT_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpGT(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpGT_const_GMatR_const_GScalarR(const cv::GMat* src1, const cv::GScalar* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpGT(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpLE_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpLE(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpLE_const_GMatR_const_GScalarR(const cv::GMat* src1, const cv::GScalar* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpLE(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpLT_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpLT(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpLT_const_GMatR_const_GScalarR(const cv::GMat* src1, const cv::GScalar* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpLT(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpNE_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpNE(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_cmpNE_const_GMatR_const_GScalarR(const cv::GMat* src1, const cv::GScalar* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::cmpNE(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_combine_const_GKernelPackageR_const_GKernelPackageR(const cv::GKernelPackage* lhs, const cv::GKernelPackage* rhs, Result<cv::GKernelPackage*>* ocvrs_return) {
		try {
			cv::GKernelPackage ret = cv::gapi::combine(*lhs, *rhs);
			Ok(new cv::GKernelPackage(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GKernelPackage*>, ocvrs_return);
	}
	
	void cv_gapi_concatHor_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::concatHor(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_concatHor_const_vectorLGMatGR(const std::vector<cv::GMat>* v, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::concatHor(*v);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_concatVert_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::concatVert(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_concatVert_const_vectorLGMatGR(const std::vector<cv::GMat>* v, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::concatVert(*v);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_convertTo_const_GMatR_int_double_double(const cv::GMat* src, int rdepth, double alpha, double beta, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::convertTo(*src, rdepth, alpha, beta);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_copy_const_GFrameR(const cv::GFrame* in, Result<cv::GFrame*>* ocvrs_return) {
		try {
			cv::GFrame ret = cv::gapi::copy(*in);
			Ok(new cv::GFrame(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GFrame*>, ocvrs_return);
	}
	
	void cv_gapi_copy_const_GMatR(const cv::GMat* in, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::copy(*in);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_crop_const_GMatR_const_RectR(const cv::GMat* src, const cv::Rect* rect, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::crop(*src, *rect);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_dilate3x3_const_GMatR_int_int_const_ScalarR(const cv::GMat* src, int iterations, int borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::dilate3x3(*src, iterations, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_dilate_const_GMatR_const_MatR_const_PointR_int_int_const_ScalarR(const cv::GMat* src, const cv::Mat* kernel, const cv::Point* anchor, int iterations, int borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::dilate(*src, *kernel, *anchor, iterations, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_divC_const_GMatR_const_GScalarR_double_int(const cv::GMat* src, const cv::GScalar* divisor, double scale, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::divC(*src, *divisor, scale, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_divRC_const_GScalarR_const_GMatR_double_int(const cv::GScalar* divident, const cv::GMat* src, double scale, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::divRC(*divident, *src, scale, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_div_const_GMatR_const_GMatR_double_int(const cv::GMat* src1, const cv::GMat* src2, double scale, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::div(*src1, *src2, scale, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_equalizeHist_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::equalizeHist(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_erode3x3_const_GMatR_int_int_const_ScalarR(const cv::GMat* src, int iterations, int borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::erode3x3(*src, iterations, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_erode_const_GMatR_const_MatR_const_PointR_int_int_const_ScalarR(const cv::GMat* src, const cv::Mat* kernel, const cv::Point* anchor, int iterations, int borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::erode(*src, *kernel, *anchor, iterations, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_filter2D_const_GMatR_int_const_MatR_const_PointR_const_ScalarR_int_const_ScalarR(const cv::GMat* src, int ddepth, const cv::Mat* kernel, const cv::Point* anchor, const cv::Scalar* delta, int borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::filter2D(*src, ddepth, *kernel, *anchor, *delta, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_flip_const_GMatR_int(const cv::GMat* src, int flipCode, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::flip(*src, flipCode);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_gaussianBlur_const_GMatR_const_SizeR_double_double_int_const_ScalarR(const cv::GMat* src, const cv::Size* ksize, double sigmaX, double sigmaY, int borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::gaussianBlur(*src, *ksize, sigmaX, sigmaY, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_inRange_const_GMatR_const_GScalarR_const_GScalarR(const cv::GMat* src, const cv::GScalar* threshLow, const cv::GScalar* threshUp, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::inRange(*src, *threshLow, *threshUp);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_integral_const_GMatR_int_int(const cv::GMat* src, int sdepth, int sqdepth, Result<std::tuple<cv::GMat, cv::GMat>*>* ocvrs_return) {
		try {
			std::tuple<cv::GMat, cv::GMat> ret = cv::gapi::integral(*src, sdepth, sqdepth);
			Ok(new std::tuple<cv::GMat, cv::GMat>(ret), ocvrs_return);
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::tuple<cv::GMat, cv::GMat>*>), ocvrs_return);
	}
	
	void cv_gapi_mask_const_GMatR_const_GMatR(const cv::GMat* src, const cv::GMat* mask, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::mask(*src, *mask);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_max_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::max(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_mean_const_GMatR(const cv::GMat* src, Result<cv::GScalar*>* ocvrs_return) {
		try {
			cv::GScalar ret = cv::gapi::mean(*src);
			Ok(new cv::GScalar(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalar*>, ocvrs_return);
	}
	
	void cv_gapi_medianBlur_const_GMatR_int(const cv::GMat* src, int ksize, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::medianBlur(*src, ksize);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_merge3_const_GMatR_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, const cv::GMat* src3, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::merge3(*src1, *src2, *src3);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_merge4_const_GMatR_const_GMatR_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, const cv::GMat* src3, const cv::GMat* src4, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::merge4(*src1, *src2, *src3, *src4);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_min_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::min(*src1, *src2);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_morphologyEx_const_GMatR_const_MorphTypes_const_MatR_const_PointR_const_int_const_BorderTypes_const_ScalarR(const cv::GMat* src, const cv::MorphTypes op, const cv::Mat* kernel, const cv::Point* anchor, const int iterations, const cv::BorderTypes borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::morphologyEx(*src, op, *kernel, *anchor, iterations, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_mulC_const_GMatR_const_GScalarR_int(const cv::GMat* src, const cv::GScalar* multiplier, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::mulC(*src, *multiplier, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_mulC_const_GMatR_double_int(const cv::GMat* src, double multiplier, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::mulC(*src, multiplier, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_mulC_const_GScalarR_const_GMatR_int(const cv::GScalar* multiplier, const cv::GMat* src, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::mulC(*multiplier, *src, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_mul_const_GMatR_const_GMatR_double_int(const cv::GMat* src1, const cv::GMat* src2, double scale, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::mul(*src1, *src2, scale, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_normInf_const_GMatR(const cv::GMat* src, Result<cv::GScalar*>* ocvrs_return) {
		try {
			cv::GScalar ret = cv::gapi::normInf(*src);
			Ok(new cv::GScalar(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalar*>, ocvrs_return);
	}
	
	void cv_gapi_normL1_const_GMatR(const cv::GMat* src, Result<cv::GScalar*>* ocvrs_return) {
		try {
			cv::GScalar ret = cv::gapi::normL1(*src);
			Ok(new cv::GScalar(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalar*>, ocvrs_return);
	}
	
	void cv_gapi_normL2_const_GMatR(const cv::GMat* src, Result<cv::GScalar*>* ocvrs_return) {
		try {
			cv::GScalar ret = cv::gapi::normL2(*src);
			Ok(new cv::GScalar(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalar*>, ocvrs_return);
	}
	
	void cv_gapi_normalize_const_GMatR_double_double_int_int(const cv::GMat* src, double alpha, double beta, int norm_type, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::normalize(*src, alpha, beta, norm_type, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_phase_const_GMatR_const_GMatR_bool(const cv::GMat* x, const cv::GMat* y, bool angleInDegrees, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::phase(*x, *y, angleInDegrees);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_polarToCart_const_GMatR_const_GMatR_bool(const cv::GMat* magnitude, const cv::GMat* angle, bool angleInDegrees, Result<std::tuple<cv::GMat, cv::GMat>*>* ocvrs_return) {
		try {
			std::tuple<cv::GMat, cv::GMat> ret = cv::gapi::polarToCart(*magnitude, *angle, angleInDegrees);
			Ok(new std::tuple<cv::GMat, cv::GMat>(ret), ocvrs_return);
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::tuple<cv::GMat, cv::GMat>*>), ocvrs_return);
	}
	
	void cv_gapi_remap_const_GMatR_const_MatR_const_MatR_int_int_const_ScalarR(const cv::GMat* src, const cv::Mat* map1, const cv::Mat* map2, int interpolation, int borderMode, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::remap(*src, *map1, *map2, interpolation, borderMode, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_resizeP_const_GMatPR_const_SizeR_int(const cv::GMatP* src, const cv::Size* dsize, int interpolation, Result<cv::GMatP*>* ocvrs_return) {
		try {
			cv::GMatP ret = cv::gapi::resizeP(*src, *dsize, interpolation);
			Ok(new cv::GMatP(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatP*>, ocvrs_return);
	}
	
	void cv_gapi_resize_const_GMatR_const_SizeR_double_double_int(const cv::GMat* src, const cv::Size* dsize, double fx, double fy, int interpolation, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::resize(*src, *dsize, fx, fy, interpolation);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_select_const_GMatR_const_GMatR_const_GMatR(const cv::GMat* src1, const cv::GMat* src2, const cv::GMat* mask, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::select(*src1, *src2, *mask);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_sepFilter_const_GMatR_int_const_MatR_const_MatR_const_PointR_const_ScalarR_int_const_ScalarR(const cv::GMat* src, int ddepth, const cv::Mat* kernelX, const cv::Mat* kernelY, const cv::Point* anchor, const cv::Scalar* delta, int borderType, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::sepFilter(*src, ddepth, *kernelX, *kernelY, *anchor, *delta, borderType, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_split3_const_GMatR(const cv::GMat* src, Result<std::tuple<cv::GMat, cv::GMat, cv::GMat>*>* ocvrs_return) {
		try {
			std::tuple<cv::GMat, cv::GMat, cv::GMat> ret = cv::gapi::split3(*src);
			Ok(new std::tuple<cv::GMat, cv::GMat, cv::GMat>(ret), ocvrs_return);
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::tuple<cv::GMat, cv::GMat, cv::GMat>*>), ocvrs_return);
	}
	
	void cv_gapi_split4_const_GMatR(const cv::GMat* src, Result<std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>*>* ocvrs_return) {
		try {
			std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat> ret = cv::gapi::split4(*src);
			Ok(new std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>(ret), ocvrs_return);
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::tuple<cv::GMat, cv::GMat, cv::GMat, cv::GMat>*>), ocvrs_return);
	}
	
	void cv_gapi_sqrt_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::sqrt(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_streaming_BGR_const_GFrameR(const cv::GFrame* in, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::streaming::BGR(*in);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_streaming_UV_const_GFrameR(const cv::GFrame* frame, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::streaming::UV(*frame);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_streaming_Y_const_GFrameR(const cv::GFrame* frame, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::streaming::Y(*frame);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_streaming_desync_const_GFrameR(const cv::GFrame* f, Result<cv::GFrame*>* ocvrs_return) {
		try {
			cv::GFrame ret = cv::gapi::streaming::desync(*f);
			Ok(new cv::GFrame(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GFrame*>, ocvrs_return);
	}
	
	void cv_gapi_streaming_desync_const_GMatR(const cv::GMat* g, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::streaming::desync(*g);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_streaming_kernels(Result<cv::GKernelPackage*>* ocvrs_return) {
		try {
			cv::GKernelPackage ret = cv::gapi::streaming::kernels();
			Ok(new cv::GKernelPackage(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GKernelPackage*>, ocvrs_return);
	}
	
	void cv_gapi_subC_const_GMatR_const_GScalarR_int(const cv::GMat* src, const cv::GScalar* c, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::subC(*src, *c, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_subRC_const_GScalarR_const_GMatR_int(const cv::GScalar* c, const cv::GMat* src, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::subRC(*c, *src, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_sub_const_GMatR_const_GMatR_int(const cv::GMat* src1, const cv::GMat* src2, int ddepth, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::sub(*src1, *src2, ddepth);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_sum_const_GMatR(const cv::GMat* src, Result<cv::GScalar*>* ocvrs_return) {
		try {
			cv::GScalar ret = cv::gapi::sum(*src);
			Ok(new cv::GScalar(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalar*>, ocvrs_return);
	}
	
	void cv_gapi_threshold_const_GMatR_const_GScalarR_const_GScalarR_int(const cv::GMat* src, const cv::GScalar* thresh, const cv::GScalar* maxval, int type, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::threshold(*src, *thresh, *maxval, type);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_threshold_const_GMatR_const_GScalarR_int(const cv::GMat* src, const cv::GScalar* maxval, int type, Result<std::tuple<cv::GMat, cv::GScalar>*>* ocvrs_return) {
		try {
			std::tuple<cv::GMat, cv::GScalar> ret = cv::gapi::threshold(*src, *maxval, type);
			Ok(new std::tuple<cv::GMat, cv::GScalar>(ret), ocvrs_return);
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::tuple<cv::GMat, cv::GScalar>*>), ocvrs_return);
	}
	
	void cv_gapi_transpose_const_GMatR(const cv::GMat* src, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::transpose(*src);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_warpAffine_const_GMatR_const_MatR_const_SizeR_int_int_const_ScalarR(const cv::GMat* src, const cv::Mat* M, const cv::Size* dsize, int flags, int borderMode, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::warpAffine(*src, *M, *dsize, flags, borderMode, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_gapi_warpPerspective_const_GMatR_const_MatR_const_SizeR_int_int_const_ScalarR(const cv::GMat* src, const cv::Mat* M, const cv::Size* dsize, int flags, int borderMode, const cv::Scalar* borderValue, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::gapi::warpPerspective(*src, *M, *dsize, flags, borderMode, *borderValue);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorA_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator+(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorA_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator+(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorA_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator+(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorD_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator/(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorD_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator/(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorD_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator/(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorEQ_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator==(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorEQ_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator==(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorEQ_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator==(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorGE_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator>=(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorGE_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator>=(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorGE_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator>=(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorG_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator>(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorG_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator>(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorG_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator>(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorLE_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator<=(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorLE_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator<=(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorLE_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator<=(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorL_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator<(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorL_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator<(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorL_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator<(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorNE_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator!=(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorNE_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator!=(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorNE_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator!=(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorNOTB_const_GMatR(const cv::GMat* lhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator~(*lhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorOR_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator|(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorOR_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator|(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorOR_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator|(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorR_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator&(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorR_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator&(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorR_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator&(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorS_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator-(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorS_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator-(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorS_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator-(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorXOR_const_GMatR_const_GMatR(const cv::GMat* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator^(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorXOR_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator^(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorXOR_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator^(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorX_const_GMatR_const_GScalarR(const cv::GMat* lhs, const cv::GScalar* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator*(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorX_const_GMatR_float(const cv::GMat* lhs, float rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator*(*lhs, rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorX_const_GScalarR_const_GMatR(const cv::GScalar* lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator*(*lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_operatorX_float_const_GMatR(float lhs, const cv::GMat* rhs, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = cv::operator*(lhs, *rhs);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_validate_input_arg_const_GRunArgR(const cv::GRunArg* arg, Result_void* ocvrs_return) {
		try {
			cv::validate_input_arg(*arg);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_validate_input_args_const_GRunArgsR(const cv::GRunArgs* args, Result_void* ocvrs_return) {
		try {
			cv::validate_input_args(*args);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GArg_GArg(Result<cv::GArg*>* ocvrs_return) {
		try {
			cv::GArg* ret = new cv::GArg();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GArg*>, ocvrs_return);
	}
	
	void cv_GArg_propKind_const(const cv::GArg* instance, cv::detail::ArgKind* ocvrs_return) {
			cv::detail::ArgKind ret = instance->kind;
			*ocvrs_return = ret;
	}
	
	void cv_GArg_propKind_ArgKind(cv::GArg* instance, cv::detail::ArgKind val) {
			instance->kind = val;
	}
	
	void cv_GArg_propOpaque_kind_const(const cv::GArg* instance, cv::detail::OpaqueKind* ocvrs_return) {
			cv::detail::OpaqueKind ret = instance->opaque_kind;
			*ocvrs_return = ret;
	}
	
	void cv_GArg_propOpaque_kind_OpaqueKind(cv::GArg* instance, cv::detail::OpaqueKind val) {
			instance->opaque_kind = val;
	}
	
	void cv_GArg_delete(cv::GArg* instance) {
			delete instance;
	}
	
	void cv_GArrayDesc_operatorEQ_const_const_GArrayDescR(const cv::GArrayDesc* instance, const cv::GArrayDesc* unnamed, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator==(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	cv::GArrayDesc* cv_GArrayDesc_implicitClone_const(const cv::GArrayDesc* instance) {
			return new cv::GArrayDesc(*instance);
	}
	
	cv::GArrayDesc* cv_GArrayDesc_defaultNew_const() {
			cv::GArrayDesc* ret = new cv::GArrayDesc();
			return ret;
	}
	
	void cv_GArrayDesc_delete(cv::GArrayDesc* instance) {
			delete instance;
	}
	
	void cv_GCall_GCall_const_GKernelR(const cv::GKernel* k, Result<cv::GCall*>* ocvrs_return) {
		try {
			cv::GCall* ret = new cv::GCall(*k);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GCall*>, ocvrs_return);
	}
	
	void cv_GCall_yield_int(cv::GCall* instance, int output, Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat ret = instance->yield(output);
			Ok(new cv::GMat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	void cv_GCall_yieldP_int(cv::GCall* instance, int output, Result<cv::GMatP*>* ocvrs_return) {
		try {
			cv::GMatP ret = instance->yieldP(output);
			Ok(new cv::GMatP(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatP*>, ocvrs_return);
	}
	
	void cv_GCall_yieldScalar_int(cv::GCall* instance, int output, Result<cv::GScalar*>* ocvrs_return) {
		try {
			cv::GScalar ret = instance->yieldScalar(output);
			Ok(new cv::GScalar(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalar*>, ocvrs_return);
	}
	
	void cv_GCall_yieldFrame_int(cv::GCall* instance, int output, Result<cv::GFrame*>* ocvrs_return) {
		try {
			cv::GFrame ret = instance->yieldFrame(output);
			Ok(new cv::GFrame(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GFrame*>, ocvrs_return);
	}
	
	void cv_GCall_kernel(cv::GCall* instance, Result<cv::GKernel*>* ocvrs_return) {
		try {
			cv::GKernel ret = instance->kernel();
			Ok(new cv::GKernel(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GKernel*>, ocvrs_return);
	}
	
	void cv_GCall_params(cv::GCall* instance, Result<cv::util::any*>* ocvrs_return) {
		try {
			cv::util::any ret = instance->params();
			Ok(new cv::util::any(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::util::any*>, ocvrs_return);
	}
	
	void cv_GCall_setArgs_vectorLGArgGRR(cv::GCall* instance, std::vector<cv::GArg>* args, Result_void* ocvrs_return) {
		try {
			instance->setArgs(std::move(*args));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GCall_delete(cv::GCall* instance) {
			delete instance;
	}
	
	cv::GCompileArg* cv_GCompileArg_GCompileArg() {
			cv::GCompileArg* ret = new cv::GCompileArg();
			return ret;
	}
	
	void* cv_GCompileArg_propTag_const(const cv::GCompileArg* instance) {
			std::string ret = instance->tag;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_GCompileArg_propTag_string(cv::GCompileArg* instance, char* val) {
			instance->tag = std::string(val);
	}
	
	void cv_GCompileArg_delete(cv::GCompileArg* instance) {
			delete instance;
	}
	
	void cv_GCompiled_GCompiled(Result<cv::GCompiled*>* ocvrs_return) {
		try {
			cv::GCompiled* ret = new cv::GCompiled();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GCompiled*>, ocvrs_return);
	}
	
	void cv_GCompiled_operator___Mat_MatR(cv::GCompiled* instance, cv::Mat* in, cv::Mat* out, Result_void* ocvrs_return) {
		try {
			instance->operator()(*in, *out);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GCompiled_operator___Mat_ScalarR(cv::GCompiled* instance, cv::Mat* in, cv::Scalar* out, Result_void* ocvrs_return) {
		try {
			instance->operator()(*in, *out);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GCompiled_operator___Mat_Mat_MatR(cv::GCompiled* instance, cv::Mat* in1, cv::Mat* in2, cv::Mat* out, Result_void* ocvrs_return) {
		try {
			instance->operator()(*in1, *in2, *out);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GCompiled_operator___Mat_Mat_ScalarR(cv::GCompiled* instance, cv::Mat* in1, cv::Mat* in2, cv::Scalar* out, Result_void* ocvrs_return) {
		try {
			instance->operator()(*in1, *in2, *out);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GCompiled_operator___const_vectorLMatGR_const_vectorLMatGR(cv::GCompiled* instance, const std::vector<cv::Mat>* ins, const std::vector<cv::Mat>* outs, Result_void* ocvrs_return) {
		try {
			instance->operator()(*ins, *outs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GCompiled_operator_bool_const(const cv::GCompiled* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator bool();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GCompiled_canReshape_const(const cv::GCompiled* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->canReshape();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GCompiled_prepareForNewStream(cv::GCompiled* instance, Result_void* ocvrs_return) {
		try {
			instance->prepareForNewStream();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GCompiled_delete(cv::GCompiled* instance) {
			delete instance;
	}
	
	void cv_GComputation_GComputation_GMat_GMat(cv::GMat* in, cv::GMat* out, Result<cv::GComputation*>* ocvrs_return) {
		try {
			cv::GComputation* ret = new cv::GComputation(*in, *out);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GComputation*>, ocvrs_return);
	}
	
	void cv_GComputation_GComputation_GMat_GScalar(cv::GMat* in, cv::GScalar* out, Result<cv::GComputation*>* ocvrs_return) {
		try {
			cv::GComputation* ret = new cv::GComputation(*in, *out);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GComputation*>, ocvrs_return);
	}
	
	void cv_GComputation_GComputation_GMat_GMat_GMat(cv::GMat* in1, cv::GMat* in2, cv::GMat* out, Result<cv::GComputation*>* ocvrs_return) {
		try {
			cv::GComputation* ret = new cv::GComputation(*in1, *in2, *out);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GComputation*>, ocvrs_return);
	}
	
	void cv_GComputation_GComputation_GMat_GMat_GScalar(cv::GMat* in1, cv::GMat* in2, cv::GScalar* out, Result<cv::GComputation*>* ocvrs_return) {
		try {
			cv::GComputation* ret = new cv::GComputation(*in1, *in2, *out);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GComputation*>, ocvrs_return);
	}
	
	void cv_GComputation_GComputation_const_vectorLGMatGR_const_vectorLGMatGR(const std::vector<cv::GMat>* ins, const std::vector<cv::GMat>* outs, Result<cv::GComputation*>* ocvrs_return) {
		try {
			cv::GComputation* ret = new cv::GComputation(*ins, *outs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GComputation*>, ocvrs_return);
	}
	
	void cv_GComputation_apply_const_ExtractArgsCallbackR_GCompileArgsRR(cv::GComputation* instance, const cv::detail::ExtractArgsCallback* callback, cv::GCompileArgs* args, Result<cv::GRunArgs*>* ocvrs_return) {
		try {
			cv::GRunArgs ret = instance->apply(*callback, std::move(*args));
			Ok(new cv::GRunArgs(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GRunArgs*>, ocvrs_return);
	}
	
	void cv_GComputation_apply_const_vectorLMatGR_const_vectorLMatGR_GCompileArgsRR(cv::GComputation* instance, const std::vector<cv::Mat>* ins, const std::vector<cv::Mat>* outs, cv::GCompileArgs* args, Result_void* ocvrs_return) {
		try {
			instance->apply(*ins, *outs, std::move(*args));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GComputation_apply_Mat_MatR_GCompileArgsRR(cv::GComputation* instance, cv::Mat* in, cv::Mat* out, cv::GCompileArgs* args, Result_void* ocvrs_return) {
		try {
			instance->apply(*in, *out, std::move(*args));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GComputation_apply_Mat_ScalarR_GCompileArgsRR(cv::GComputation* instance, cv::Mat* in, cv::Scalar* out, cv::GCompileArgs* args, Result_void* ocvrs_return) {
		try {
			instance->apply(*in, *out, std::move(*args));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GComputation_apply_Mat_Mat_MatR_GCompileArgsRR(cv::GComputation* instance, cv::Mat* in1, cv::Mat* in2, cv::Mat* out, cv::GCompileArgs* args, Result_void* ocvrs_return) {
		try {
			instance->apply(*in1, *in2, *out, std::move(*args));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GComputation_apply_Mat_Mat_ScalarR_GCompileArgsRR(cv::GComputation* instance, cv::Mat* in1, cv::Mat* in2, cv::Scalar* out, cv::GCompileArgs* args, Result_void* ocvrs_return) {
		try {
			instance->apply(*in1, *in2, *out, std::move(*args));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GComputation_apply_const_vectorLMatGR_vectorLMatGR_GCompileArgsRR(cv::GComputation* instance, const std::vector<cv::Mat>* ins, std::vector<cv::Mat>* outs, cv::GCompileArgs* args, Result_void* ocvrs_return) {
		try {
			instance->apply(*ins, *outs, std::move(*args));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GComputation_compileStreaming_GCompileArgsRR(cv::GComputation* instance, cv::GCompileArgs* args, Result<cv::GStreamingCompiled*>* ocvrs_return) {
		try {
			cv::GStreamingCompiled ret = instance->compileStreaming(std::move(*args));
			Ok(new cv::GStreamingCompiled(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GStreamingCompiled*>, ocvrs_return);
	}
	
	void cv_GComputation_compileStreaming_const_ExtractMetaCallbackR_GCompileArgsRR(cv::GComputation* instance, const cv::detail::ExtractMetaCallback* callback, cv::GCompileArgs* args, Result<cv::GStreamingCompiled*>* ocvrs_return) {
		try {
			cv::GStreamingCompiled ret = instance->compileStreaming(*callback, std::move(*args));
			Ok(new cv::GStreamingCompiled(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GStreamingCompiled*>, ocvrs_return);
	}
	
	void cv_GComputation_delete(cv::GComputation* instance) {
			delete instance;
	}
	
	void cv_GFrame_GFrame(Result<cv::GFrame*>* ocvrs_return) {
		try {
			cv::GFrame* ret = new cv::GFrame();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GFrame*>, ocvrs_return);
	}
	
	cv::GFrame* cv_GFrame_implicitClone_const(const cv::GFrame* instance) {
			return new cv::GFrame(*instance);
	}
	
	void cv_GFrame_delete(cv::GFrame* instance) {
			delete instance;
	}
	
	void cv_GFrameDesc_operatorEQ_const_const_GFrameDescR(const cv::GFrameDesc* instance, const cv::GFrameDesc* unnamed, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator==(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GFrameDesc_propFmt_const(const cv::GFrameDesc* instance, cv::MediaFormat* ocvrs_return) {
			cv::MediaFormat ret = instance->fmt;
			*ocvrs_return = ret;
	}
	
	void cv_GFrameDesc_propFmt_MediaFormat(cv::GFrameDesc* instance, cv::MediaFormat val) {
			instance->fmt = val;
	}
	
	void cv_GFrameDesc_propSize_const(const cv::GFrameDesc* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->size;
			*ocvrs_return = ret;
	}
	
	void cv_GFrameDesc_propSize_Size(cv::GFrameDesc* instance, cv::Size* val) {
			instance->size = *val;
	}
	
	void cv_GFrameDesc_delete(cv::GFrameDesc* instance) {
			delete instance;
	}
	
	void* cv_GKernel_propName_const(const cv::GKernel* instance) {
			std::string ret = instance->name;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_GKernel_propName_string(cv::GKernel* instance, char* val) {
			instance->name = std::string(val);
	}
	
	void* cv_GKernel_propTag_const(const cv::GKernel* instance) {
			std::string ret = instance->tag;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_GKernel_propTag_string(cv::GKernel* instance, char* val) {
			instance->tag = std::string(val);
	}
	
	cv::GShapes* cv_GKernel_propOutShapes_const(const cv::GKernel* instance) {
			cv::GShapes ret = instance->outShapes;
			return new cv::GShapes(ret);
	}
	
	void cv_GKernel_propOutShapes_GShapes(cv::GKernel* instance, cv::GShapes* val) {
			instance->outShapes = *val;
	}
	
	cv::GKinds* cv_GKernel_propInKinds_const(const cv::GKernel* instance) {
			cv::GKinds ret = instance->inKinds;
			return new cv::GKinds(ret);
	}
	
	void cv_GKernel_propInKinds_GKinds(cv::GKernel* instance, cv::GKinds* val) {
			instance->inKinds = *val;
	}
	
	cv::GKinds* cv_GKernel_propOutKinds_const(const cv::GKernel* instance) {
			cv::GKinds ret = instance->outKinds;
			return new cv::GKinds(ret);
	}
	
	void cv_GKernel_propOutKinds_GKinds(cv::GKernel* instance, cv::GKinds* val) {
			instance->outKinds = *val;
	}
	
	void cv_GKernel_delete(cv::GKernel* instance) {
			delete instance;
	}
	
	cv::util::any* cv_GKernelImpl_propOpaque_const(const cv::GKernelImpl* instance) {
			cv::util::any ret = instance->opaque;
			return new cv::util::any(ret);
	}
	
	void cv_GKernelImpl_propOpaque_any(cv::GKernelImpl* instance, cv::util::any* val) {
			instance->opaque = *val;
	}
	
	void cv_GKernelImpl_delete(cv::GKernelImpl* instance) {
			delete instance;
	}
	
	void cv_GKernelPackage_include_const_GFunctorR(cv::GKernelPackage* instance, const cv::gapi::GFunctor* functor, Result_void* ocvrs_return) {
		try {
			instance->include(*functor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GKernelPackage_get_transformations_const(const cv::GKernelPackage* instance, Result<std::vector<cv::GTransform>*>* ocvrs_return) {
		try {
			const std::vector<cv::GTransform> ret = instance->get_transformations();
			Ok(new const std::vector<cv::GTransform>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::GTransform>*>, ocvrs_return);
	}
	
	void cv_GKernelPackage_get_kernel_ids_const(const cv::GKernelPackage* instance, Result<std::vector<std::string>*>* ocvrs_return) {
		try {
			std::vector<std::string> ret = instance->get_kernel_ids();
			Ok(new std::vector<std::string>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<std::string>*>, ocvrs_return);
	}
	
	void cv_GKernelPackage_remove_const_GBackendR(cv::GKernelPackage* instance, const cv::gapi::GBackend* backend, Result_void* ocvrs_return) {
		try {
			instance->remove(*backend);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GKernelPackage_includesAPI_const_const_stringR(const cv::GKernelPackage* instance, const char* id, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->includesAPI(std::string(id));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GKernelPackage_lookup_const_const_stringR(const cv::GKernelPackage* instance, const char* id, Result<std::pair<cv::gapi::GBackend, cv::GKernelImpl>*>* ocvrs_return) {
		try {
			std::pair<cv::gapi::GBackend, cv::GKernelImpl> ret = instance->lookup(std::string(id));
			Ok(new std::pair<cv::gapi::GBackend, cv::GKernelImpl>(ret), ocvrs_return);
		} OCVRS_CATCH(OCVRS_TYPE(Result<std::pair<cv::gapi::GBackend, cv::GKernelImpl>*>), ocvrs_return);
	}
	
	void cv_GKernelPackage_include_const_GBackendR_const_stringR(cv::GKernelPackage* instance, const cv::gapi::GBackend* backend, const char* kernel_id, Result_void* ocvrs_return) {
		try {
			instance->include(*backend, std::string(kernel_id));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GKernelPackage_backends_const(const cv::GKernelPackage* instance, Result<std::vector<cv::gapi::GBackend>*>* ocvrs_return) {
		try {
			std::vector<cv::gapi::GBackend> ret = instance->backends();
			Ok(new std::vector<cv::gapi::GBackend>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::gapi::GBackend>*>, ocvrs_return);
	}
	
	cv::GKernelPackage* cv_GKernelPackage_implicitClone_const(const cv::GKernelPackage* instance) {
			return new cv::GKernelPackage(*instance);
	}
	
	cv::GKernelPackage* cv_GKernelPackage_defaultNew_const() {
			cv::GKernelPackage* ret = new cv::GKernelPackage();
			return ret;
	}
	
	void cv_GKernelPackage_delete(cv::GKernelPackage* instance) {
			delete instance;
	}
	
	void cv_GMat_GMat(Result<cv::GMat*>* ocvrs_return) {
		try {
			cv::GMat* ret = new cv::GMat();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMat*>, ocvrs_return);
	}
	
	cv::GMat* cv_GMat_implicitClone_const(const cv::GMat* instance) {
			return new cv::GMat(*instance);
	}
	
	void cv_GMat_delete(cv::GMat* instance) {
			delete instance;
	}
	
	void cv_GMatDesc_GMatDesc_int_int_Size_bool(int d, int c, cv::Size* s, bool p, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc* ret = new cv::GMatDesc(d, c, *s, p);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_GMatDesc_int_const_vectorLintGR(int d, const std::vector<int>* dd, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc* ret = new cv::GMatDesc(d, *dd);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_GMatDesc_int_vectorLintGRR(int d, std::vector<int>* dd, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc* ret = new cv::GMatDesc(d, std::move(*dd));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_GMatDesc(Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc* ret = new cv::GMatDesc();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_operatorEQ_const_const_GMatDescR(const cv::GMatDesc* instance, const cv::GMatDesc* rhs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator==(*rhs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GMatDesc_operatorNE_const_const_GMatDescR(const cv::GMatDesc* instance, const cv::GMatDesc* rhs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator!=(*rhs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GMatDesc_isND_const(const cv::GMatDesc* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isND();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GMatDesc_canDescribe_const_const_MatR(const cv::GMatDesc* instance, const cv::Mat* mat, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->canDescribe(*mat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GMatDesc_canDescribe_const_const_RMatR(const cv::GMatDesc* instance, const cv::RMat* mat, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->canDescribe(*mat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GMatDesc_withSizeDelta_const_Size(const cv::GMatDesc* instance, cv::Size* delta, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = instance->withSizeDelta(*delta);
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_withSizeDelta_const_int_int(const cv::GMatDesc* instance, int dx, int dy, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = instance->withSizeDelta(dx, dy);
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_withSize_const_Size(const cv::GMatDesc* instance, cv::Size* sz, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = instance->withSize(*sz);
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_withDepth_const_int(const cv::GMatDesc* instance, int ddepth, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = instance->withDepth(ddepth);
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_withType_const_int_int(const cv::GMatDesc* instance, int ddepth, int dchan, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = instance->withType(ddepth, dchan);
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_asPlanar_const(const cv::GMatDesc* instance, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = instance->asPlanar();
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_asPlanar_const_int(const cv::GMatDesc* instance, int planes, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = instance->asPlanar(planes);
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_GMatDesc_asInterleaved_const(const cv::GMatDesc* instance, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = instance->asInterleaved();
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	cv::GMatDesc* cv_GMatDesc_implicitClone_const(const cv::GMatDesc* instance) {
			return new cv::GMatDesc(*instance);
	}
	
	int cv_GMatDesc_propDepth_const(const cv::GMatDesc* instance) {
			int ret = instance->depth;
			return ret;
	}
	
	void cv_GMatDesc_propDepth_int(cv::GMatDesc* instance, int val) {
			instance->depth = val;
	}
	
	int cv_GMatDesc_propChan_const(const cv::GMatDesc* instance) {
			int ret = instance->chan;
			return ret;
	}
	
	void cv_GMatDesc_propChan_int(cv::GMatDesc* instance, int val) {
			instance->chan = val;
	}
	
	void cv_GMatDesc_propSize_const(const cv::GMatDesc* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->size;
			*ocvrs_return = ret;
	}
	
	void cv_GMatDesc_propSize_Size(cv::GMatDesc* instance, cv::Size* val) {
			instance->size = *val;
	}
	
	bool cv_GMatDesc_propPlanar_const(const cv::GMatDesc* instance) {
			bool ret = instance->planar;
			return ret;
	}
	
	void cv_GMatDesc_propPlanar_bool(cv::GMatDesc* instance, bool val) {
			instance->planar = val;
	}
	
	std::vector<int>* cv_GMatDesc_propDims_const(const cv::GMatDesc* instance) {
			std::vector<int> ret = instance->dims;
			return new std::vector<int>(ret);
	}
	
	void cv_GMatDesc_propDims_vectorLintG(cv::GMatDesc* instance, std::vector<int>* val) {
			instance->dims = *val;
	}
	
	void cv_GMatDesc_delete(cv::GMatDesc* instance) {
			delete instance;
	}
	
	cv::GMat* cv_GMatP_to_GMat(cv::GMatP* instance) {
			return dynamic_cast<cv::GMat*>(instance);
	}
	
	void cv_GMatP_delete(cv::GMatP* instance) {
			delete instance;
	}
	
	void cv_GOpaqueDesc_operatorEQ_const_const_GOpaqueDescR(const cv::GOpaqueDesc* instance, const cv::GOpaqueDesc* unnamed, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator==(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	cv::GOpaqueDesc* cv_GOpaqueDesc_implicitClone_const(const cv::GOpaqueDesc* instance) {
			return new cv::GOpaqueDesc(*instance);
	}
	
	cv::GOpaqueDesc* cv_GOpaqueDesc_defaultNew_const() {
			cv::GOpaqueDesc* ret = new cv::GOpaqueDesc();
			return ret;
	}
	
	void cv_GOpaqueDesc_delete(cv::GOpaqueDesc* instance) {
			delete instance;
	}
	
	void cv_GRunArg_GRunArg(Result<cv::GRunArg*>* ocvrs_return) {
		try {
			cv::GRunArg* ret = new cv::GRunArg();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GRunArg*>, ocvrs_return);
	}
	
	void cv_GRunArg_GRunArg_const_GRunArgR(const cv::GRunArg* arg, Result<cv::GRunArg*>* ocvrs_return) {
		try {
			cv::GRunArg* ret = new cv::GRunArg(*arg);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GRunArg*>, ocvrs_return);
	}
	
	void cv_GRunArg_GRunArg_GRunArgRR(cv::GRunArg* arg, Result<cv::GRunArg*>* ocvrs_return) {
		try {
			cv::GRunArg* ret = new cv::GRunArg(std::move(*arg));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GRunArg*>, ocvrs_return);
	}
	
	void cv_GRunArg_delete(cv::GRunArg* instance) {
			delete instance;
	}
	
	void cv_GScalar_GScalar(Result<cv::GScalar*>* ocvrs_return) {
		try {
			cv::GScalar* ret = new cv::GScalar();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalar*>, ocvrs_return);
	}
	
	void cv_GScalar_GScalar_const_ScalarR(const cv::Scalar* s, Result<cv::GScalar*>* ocvrs_return) {
		try {
			cv::GScalar* ret = new cv::GScalar(*s);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalar*>, ocvrs_return);
	}
	
	void cv_GScalar_GScalar_ScalarRR(cv::Scalar* s, Result<cv::GScalar*>* ocvrs_return) {
		try {
			cv::GScalar* ret = new cv::GScalar(std::move(*s));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalar*>, ocvrs_return);
	}
	
	void cv_GScalar_GScalar_double(double v0, Result<cv::GScalar*>* ocvrs_return) {
		try {
			cv::GScalar* ret = new cv::GScalar(v0);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GScalar*>, ocvrs_return);
	}
	
	cv::GScalar* cv_GScalar_implicitClone_const(const cv::GScalar* instance) {
			return new cv::GScalar(*instance);
	}
	
	void cv_GScalar_delete(cv::GScalar* instance) {
			delete instance;
	}
	
	void cv_GScalarDesc_operatorEQ_const_const_GScalarDescR(const cv::GScalarDesc* instance, const cv::GScalarDesc* unnamed, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator==(*unnamed);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GScalarDesc_operatorNE_const_const_GScalarDescR(const cv::GScalarDesc* instance, const cv::GScalarDesc* rhs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator!=(*rhs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	cv::GScalarDesc* cv_GScalarDesc_implicitClone_const(const cv::GScalarDesc* instance) {
			return new cv::GScalarDesc(*instance);
	}
	
	cv::GScalarDesc* cv_GScalarDesc_defaultNew_const() {
			cv::GScalarDesc* ret = new cv::GScalarDesc();
			return ret;
	}
	
	void cv_GScalarDesc_delete(cv::GScalarDesc* instance) {
			delete instance;
	}
	
	void cv_GStreamingCompiled_GStreamingCompiled(Result<cv::GStreamingCompiled*>* ocvrs_return) {
		try {
			cv::GStreamingCompiled* ret = new cv::GStreamingCompiled();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::GStreamingCompiled*>, ocvrs_return);
	}
	
	void cv_GStreamingCompiled_setSource_GRunArgsRR(cv::GStreamingCompiled* instance, cv::GRunArgs* ins, Result_void* ocvrs_return) {
		try {
			instance->setSource(std::move(*ins));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GStreamingCompiled_setSource_const_ExtractArgsCallbackR(cv::GStreamingCompiled* instance, const cv::detail::ExtractArgsCallback* callback, Result_void* ocvrs_return) {
		try {
			instance->setSource(*callback);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GStreamingCompiled_start(cv::GStreamingCompiled* instance, Result_void* ocvrs_return) {
		try {
			instance->start();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GStreamingCompiled_stop(cv::GStreamingCompiled* instance, Result_void* ocvrs_return) {
		try {
			instance->stop();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_GStreamingCompiled_running_const(const cv::GStreamingCompiled* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->running();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_GStreamingCompiled_operator_bool_const(const cv::GStreamingCompiled* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator bool();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	cv::GStreamingCompiled* cv_GStreamingCompiled_implicitClone_const(const cv::GStreamingCompiled* instance) {
			return new cv::GStreamingCompiled(*instance);
	}
	
	void cv_GStreamingCompiled_delete(cv::GStreamingCompiled* instance) {
			delete instance;
	}
	
	void* cv_GTransform_propDescription_const(const cv::GTransform* instance) {
			std::string ret = instance->description;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_GTransform_propDescription_string(cv::GTransform* instance, char* val) {
			instance->description = std::string(val);
	}
	
	void cv_GTransform_delete(cv::GTransform* instance) {
			delete instance;
	}
	
	cv::GTypeInfo* cv_GTypeInfo_implicitClone_const(const cv::GTypeInfo* instance) {
			return new cv::GTypeInfo(*instance);
	}
	
	cv::GTypeInfo* cv_GTypeInfo_defaultNew_const() {
			cv::GTypeInfo* ret = new cv::GTypeInfo();
			return ret;
	}
	
	void cv_GTypeInfo_propShape_const(const cv::GTypeInfo* instance, cv::GShape* ocvrs_return) {
			cv::GShape ret = instance->shape;
			*ocvrs_return = ret;
	}
	
	void cv_GTypeInfo_propShape_GShape(cv::GTypeInfo* instance, cv::GShape val) {
			instance->shape = val;
	}
	
	void cv_GTypeInfo_propKind_const(const cv::GTypeInfo* instance, cv::detail::OpaqueKind* ocvrs_return) {
			cv::detail::OpaqueKind ret = instance->kind;
			*ocvrs_return = ret;
	}
	
	void cv_GTypeInfo_propKind_OpaqueKind(cv::GTypeInfo* instance, cv::detail::OpaqueKind val) {
			instance->kind = val;
	}
	
	void cv_GTypeInfo_delete(cv::GTypeInfo* instance) {
			delete instance;
	}
	
	void cv_MediaFrame_MediaFrame(Result<cv::MediaFrame*>* ocvrs_return) {
		try {
			cv::MediaFrame* ret = new cv::MediaFrame();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::MediaFrame*>, ocvrs_return);
	}
	
	void cv_MediaFrame_desc_const(const cv::MediaFrame* instance, Result<cv::GFrameDesc*>* ocvrs_return) {
		try {
			cv::GFrameDesc ret = instance->desc();
			Ok(new cv::GFrameDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GFrameDesc*>, ocvrs_return);
	}
	
	void cv_MediaFrame_blobParams_const(const cv::MediaFrame* instance, Result<cv::util::any*>* ocvrs_return) {
		try {
			cv::util::any ret = instance->blobParams();
			Ok(new cv::util::any(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::util::any*>, ocvrs_return);
	}
	
	void cv_MediaFrame_delete(cv::MediaFrame* instance) {
			delete instance;
	}
	
	void cv_MediaFrame_IAdapter_meta_const(const cv::MediaFrame::IAdapter* instance, Result<cv::GFrameDesc*>* ocvrs_return) {
		try {
			cv::GFrameDesc ret = instance->meta();
			Ok(new cv::GFrameDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GFrameDesc*>, ocvrs_return);
	}
	
	void cv_MediaFrame_IAdapter_blobParams_const(const cv::MediaFrame::IAdapter* instance, Result<cv::util::any*>* ocvrs_return) {
		try {
			cv::util::any ret = instance->blobParams();
			Ok(new cv::util::any(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::util::any*>, ocvrs_return);
	}
	
	void cv_MediaFrame_IAdapter_delete(cv::MediaFrame::IAdapter* instance) {
			delete instance;
	}
	
	cv::MediaFrame::View* cv_MediaFrame_View_View_ViewRR(cv::MediaFrame::View* unnamed) {
			cv::MediaFrame::View* ret = new cv::MediaFrame::View(std::move(*unnamed));
			return ret;
	}
	
	void cv_MediaFrame_View_delete(cv::MediaFrame::View* instance) {
			delete instance;
	}
	
	cv::RMat* cv_RMat_RMat() {
			cv::RMat* ret = new cv::RMat();
			return ret;
	}
	
	void cv_RMat_desc_const(const cv::RMat* instance, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = instance->desc();
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_RMat_delete(cv::RMat* instance) {
			delete instance;
	}
	
	void cv_RMat_IAdapter_desc_const(const cv::RMat::IAdapter* instance, Result<cv::GMatDesc*>* ocvrs_return) {
		try {
			cv::GMatDesc ret = instance->desc();
			Ok(new cv::GMatDesc(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GMatDesc*>, ocvrs_return);
	}
	
	void cv_RMat_IAdapter_delete(cv::RMat::IAdapter* instance) {
			delete instance;
	}
	
	cv::RMat::View* cv_RMat_View_View() {
			cv::RMat::View* ret = new cv::RMat::View();
			return ret;
	}
	
	cv::RMat::View* cv_RMat_View_View_ViewRR(cv::RMat::View* unnamed) {
			cv::RMat::View* ret = new cv::RMat::View(std::move(*unnamed));
			return ret;
	}
	
	void cv_RMat_View_size_const(const cv::RMat::View* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_RMat_View_dims_const(const cv::RMat::View* instance, Result<std::vector<int>*>* ocvrs_return) {
		try {
			const std::vector<int> ret = instance->dims();
			Ok(new const std::vector<int>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<int>*>, ocvrs_return);
	}
	
	void cv_RMat_View_cols_const(const cv::RMat::View* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->cols();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_RMat_View_rows_const(const cv::RMat::View* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->rows();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_RMat_View_type_const(const cv::RMat::View* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->type();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_RMat_View_depth_const(const cv::RMat::View* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->depth();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_RMat_View_chan_const(const cv::RMat::View* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->chan();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_RMat_View_elemSize_const(const cv::RMat::View* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->elemSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<size_t>, ocvrs_return);
	}
	
	void cv_RMat_View_step_const_size_t(const cv::RMat::View* instance, size_t i, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->step(i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<size_t>, ocvrs_return);
	}
	
	void cv_RMat_View_steps_const(const cv::RMat::View* instance, Result<cv::RMat::View::stepsT*>* ocvrs_return) {
		try {
			const cv::RMat::View::stepsT ret = instance->steps();
			Ok(new const cv::RMat::View::stepsT(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::RMat::View::stepsT*>, ocvrs_return);
	}
	
	void cv_RMat_View_delete(cv::RMat::View* instance) {
			delete instance;
	}
	
	void cv_detail_ExtractArgsCallback_operator___const_const_GTypesInfoR(const cv::detail::ExtractArgsCallback* instance, const cv::GTypesInfo* info, Result<cv::GRunArgs*>* ocvrs_return) {
		try {
			cv::GRunArgs ret = instance->operator()(*info);
			Ok(new cv::GRunArgs(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GRunArgs*>, ocvrs_return);
	}
	
	void cv_detail_ExtractArgsCallback_delete(cv::detail::ExtractArgsCallback* instance) {
			delete instance;
	}
	
	void cv_detail_ExtractMetaCallback_delete(cv::detail::ExtractMetaCallback* instance) {
			delete instance;
	}
	
	void cv_detail_GArrayU_delete(cv::detail::GArrayU* instance) {
			delete instance;
	}
	
	void cv_detail_GOpaqueU_delete(cv::detail::GOpaqueU* instance) {
			delete instance;
	}
	
	void cv_gapi_GBackend_GBackend(Result<cv::gapi::GBackend*>* ocvrs_return) {
		try {
			cv::gapi::GBackend* ret = new cv::gapi::GBackend();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::GBackend*>, ocvrs_return);
	}
	
	void cv_gapi_GBackend_operatorEQ_const_const_GBackendR(const cv::gapi::GBackend* instance, const cv::gapi::GBackend* rhs, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator==(*rhs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_gapi_GBackend_delete(cv::gapi::GBackend* instance) {
			delete instance;
	}
	
	void cv_gapi_GFunctor_impl_const(const cv::gapi::GFunctor* instance, Result<cv::GKernelImpl*>* ocvrs_return) {
		try {
			cv::GKernelImpl ret = instance->impl();
			Ok(new cv::GKernelImpl(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::GKernelImpl*>, ocvrs_return);
	}
	
	void cv_gapi_GFunctor_backend_const(const cv::gapi::GFunctor* instance, Result<cv::gapi::GBackend*>* ocvrs_return) {
		try {
			cv::gapi::GBackend ret = instance->backend();
			Ok(new cv::gapi::GBackend(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::GBackend*>, ocvrs_return);
	}
	
	void cv_gapi_GFunctor_id_const(const cv::gapi::GFunctor* instance, Result<void*>* ocvrs_return) {
		try {
			const char* ret = instance->id();
			Ok(ocvrs_create_string(ret), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_gapi_GFunctor_delete(cv::gapi::GFunctor* instance) {
			delete instance;
	}
	
	cv::gapi::own::Scalar* cv_gapi_own_Scalar_Scalar() {
			cv::gapi::own::Scalar* ret = new cv::gapi::own::Scalar();
			return ret;
	}
	
	void cv_gapi_own_Scalar_Scalar_double(double v0, Result<cv::gapi::own::Scalar*>* ocvrs_return) {
		try {
			cv::gapi::own::Scalar* ret = new cv::gapi::own::Scalar(v0);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::own::Scalar*>, ocvrs_return);
	}
	
	void cv_gapi_own_Scalar_Scalar_double_double_double_double(double v0, double v1, double v2, double v3, Result<cv::gapi::own::Scalar*>* ocvrs_return) {
		try {
			cv::gapi::own::Scalar* ret = new cv::gapi::own::Scalar(v0, v1, v2, v3);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::own::Scalar*>, ocvrs_return);
	}
	
	void cv_gapi_own_Scalar_operator___const_int(const cv::gapi::own::Scalar* instance, int i, Result<double>* ocvrs_return) {
		try {
			const double ret = instance->operator[](i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<double>, ocvrs_return);
	}
	
	void cv_gapi_own_Scalar_operator___int(cv::gapi::own::Scalar* instance, int i, Result<double>* ocvrs_return) {
		try {
			double ret = instance->operator[](i);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<double>, ocvrs_return);
	}
	
	void cv_gapi_own_Scalar_all_double(double v0, Result<cv::gapi::own::Scalar*>* ocvrs_return) {
		try {
			cv::gapi::own::Scalar ret = cv::gapi::own::Scalar::all(v0);
			Ok(new cv::gapi::own::Scalar(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::own::Scalar*>, ocvrs_return);
	}
	
	double** cv_gapi_own_Scalar_propVal(cv::gapi::own::Scalar* instance) {
			double(*ret)[4] = &instance->val;
			return (double**)ret;
	}
	
	void cv_gapi_own_Scalar_delete(cv::gapi::own::Scalar* instance) {
			delete instance;
	}
	
	void cv_gapi_streaming_queue_capacity_queue_capacity_size_t(size_t cap, Result<cv::gapi::streaming::queue_capacity>* ocvrs_return) {
		try {
			cv::gapi::streaming::queue_capacity ret(cap);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::streaming::queue_capacity>, ocvrs_return);
	}
	
	cv::gapi::GKernelPackage* cv_gapi_use_only_propPkg_const(const cv::gapi::use_only* instance) {
			cv::gapi::GKernelPackage ret = instance->pkg;
			return new cv::gapi::GKernelPackage(ret);
	}
	
	void cv_gapi_use_only_propPkg_GKernelPackage(cv::gapi::use_only* instance, cv::gapi::GKernelPackage* val) {
			instance->pkg = *val;
	}
	
	void cv_gapi_use_only_delete(cv::gapi::use_only* instance) {
			delete instance;
	}
	
	cv::GRunArg* cv_gapi_wip_Data_to_GRunArg(cv::gapi::wip::Data* instance) {
			return dynamic_cast<cv::GRunArg*>(instance);
	}
	
	void cv_gapi_wip_Data_delete(cv::gapi::wip::Data* instance) {
			delete instance;
	}
	
	void cv_gapi_wip_draw_Circle_Circle_const_PointR_int_const_ScalarR_int_int_int(const cv::Point* center_, int radius_, const cv::Scalar* color_, int thick_, int lt_, int shift_, Result<cv::gapi::wip::draw::Circle>* ocvrs_return) {
		try {
			cv::gapi::wip::draw::Circle ret(*center_, radius_, *color_, thick_, lt_, shift_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::wip::draw::Circle>, ocvrs_return);
	}
	
	void cv_gapi_wip_draw_Circle_Circle(cv::gapi::wip::draw::Circle* ocvrs_return) {
			cv::gapi::wip::draw::Circle ret;
			*ocvrs_return = ret;
	}
	
	void cv_gapi_wip_draw_Image_Image_const_PointR_const_MatR_const_MatR(const cv::Point* org_, const cv::Mat* img_, const cv::Mat* alpha_, Result<cv::gapi::wip::draw::Image*>* ocvrs_return) {
		try {
			cv::gapi::wip::draw::Image* ret = new cv::gapi::wip::draw::Image(*org_, *img_, *alpha_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::wip::draw::Image*>, ocvrs_return);
	}
	
	cv::gapi::wip::draw::Image* cv_gapi_wip_draw_Image_Image() {
			cv::gapi::wip::draw::Image* ret = new cv::gapi::wip::draw::Image();
			return ret;
	}
	
	cv::gapi::wip::draw::Image* cv_gapi_wip_draw_Image_implicitClone_const(const cv::gapi::wip::draw::Image* instance) {
			return new cv::gapi::wip::draw::Image(*instance);
	}
	
	void cv_gapi_wip_draw_Image_propOrg_const(const cv::gapi::wip::draw::Image* instance, cv::Point* ocvrs_return) {
			cv::Point ret = instance->org;
			*ocvrs_return = ret;
	}
	
	void cv_gapi_wip_draw_Image_propOrg_Point(cv::gapi::wip::draw::Image* instance, cv::Point* val) {
			instance->org = *val;
	}
	
	cv::Mat* cv_gapi_wip_draw_Image_propImg_const(const cv::gapi::wip::draw::Image* instance) {
			cv::Mat ret = instance->img;
			return new cv::Mat(ret);
	}
	
	void cv_gapi_wip_draw_Image_propImg_Mat(cv::gapi::wip::draw::Image* instance, cv::Mat* val) {
			instance->img = *val;
	}
	
	cv::Mat* cv_gapi_wip_draw_Image_propAlpha_const(const cv::gapi::wip::draw::Image* instance) {
			cv::Mat ret = instance->alpha;
			return new cv::Mat(ret);
	}
	
	void cv_gapi_wip_draw_Image_propAlpha_Mat(cv::gapi::wip::draw::Image* instance, cv::Mat* val) {
			instance->alpha = *val;
	}
	
	void cv_gapi_wip_draw_Image_delete(cv::gapi::wip::draw::Image* instance) {
			delete instance;
	}
	
	void cv_gapi_wip_draw_Line_Line_const_PointR_const_PointR_const_ScalarR_int_int_int(const cv::Point* pt1_, const cv::Point* pt2_, const cv::Scalar* color_, int thick_, int lt_, int shift_, Result<cv::gapi::wip::draw::Line>* ocvrs_return) {
		try {
			cv::gapi::wip::draw::Line ret(*pt1_, *pt2_, *color_, thick_, lt_, shift_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::wip::draw::Line>, ocvrs_return);
	}
	
	void cv_gapi_wip_draw_Line_Line(cv::gapi::wip::draw::Line* ocvrs_return) {
			cv::gapi::wip::draw::Line ret;
			*ocvrs_return = ret;
	}
	
	void cv_gapi_wip_draw_Mosaic_Mosaic_const_RectR_int_int(const cv::Rect* mos_, int cellSz_, int decim_, Result<cv::gapi::wip::draw::Mosaic>* ocvrs_return) {
		try {
			cv::gapi::wip::draw::Mosaic ret(*mos_, cellSz_, decim_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::wip::draw::Mosaic>, ocvrs_return);
	}
	
	void cv_gapi_wip_draw_Mosaic_Mosaic(Result<cv::gapi::wip::draw::Mosaic>* ocvrs_return) {
		try {
			cv::gapi::wip::draw::Mosaic ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::wip::draw::Mosaic>, ocvrs_return);
	}
	
	void cv_gapi_wip_draw_Poly_Poly_const_vectorLPointGR_const_ScalarR_int_int_int(const std::vector<cv::Point>* points_, const cv::Scalar* color_, int thick_, int lt_, int shift_, Result<cv::gapi::wip::draw::Poly*>* ocvrs_return) {
		try {
			cv::gapi::wip::draw::Poly* ret = new cv::gapi::wip::draw::Poly(*points_, *color_, thick_, lt_, shift_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::wip::draw::Poly*>, ocvrs_return);
	}
	
	cv::gapi::wip::draw::Poly* cv_gapi_wip_draw_Poly_Poly() {
			cv::gapi::wip::draw::Poly* ret = new cv::gapi::wip::draw::Poly();
			return ret;
	}
	
	cv::gapi::wip::draw::Poly* cv_gapi_wip_draw_Poly_implicitClone_const(const cv::gapi::wip::draw::Poly* instance) {
			return new cv::gapi::wip::draw::Poly(*instance);
	}
	
	std::vector<cv::Point>* cv_gapi_wip_draw_Poly_propPoints_const(const cv::gapi::wip::draw::Poly* instance) {
			std::vector<cv::Point> ret = instance->points;
			return new std::vector<cv::Point>(ret);
	}
	
	void cv_gapi_wip_draw_Poly_propPoints_vectorLPointG(cv::gapi::wip::draw::Poly* instance, std::vector<cv::Point>* val) {
			instance->points = *val;
	}
	
	void cv_gapi_wip_draw_Poly_propColor_const(const cv::gapi::wip::draw::Poly* instance, cv::Scalar* ocvrs_return) {
			cv::Scalar ret = instance->color;
			*ocvrs_return = ret;
	}
	
	void cv_gapi_wip_draw_Poly_propColor_Scalar(cv::gapi::wip::draw::Poly* instance, cv::Scalar* val) {
			instance->color = *val;
	}
	
	int cv_gapi_wip_draw_Poly_propThick_const(const cv::gapi::wip::draw::Poly* instance) {
			int ret = instance->thick;
			return ret;
	}
	
	void cv_gapi_wip_draw_Poly_propThick_int(cv::gapi::wip::draw::Poly* instance, int val) {
			instance->thick = val;
	}
	
	int cv_gapi_wip_draw_Poly_propLt_const(const cv::gapi::wip::draw::Poly* instance) {
			int ret = instance->lt;
			return ret;
	}
	
	void cv_gapi_wip_draw_Poly_propLt_int(cv::gapi::wip::draw::Poly* instance, int val) {
			instance->lt = val;
	}
	
	int cv_gapi_wip_draw_Poly_propShift_const(const cv::gapi::wip::draw::Poly* instance) {
			int ret = instance->shift;
			return ret;
	}
	
	void cv_gapi_wip_draw_Poly_propShift_int(cv::gapi::wip::draw::Poly* instance, int val) {
			instance->shift = val;
	}
	
	void cv_gapi_wip_draw_Poly_delete(cv::gapi::wip::draw::Poly* instance) {
			delete instance;
	}
	
	void cv_gapi_wip_draw_Rect_Rect_const_RectR_const_ScalarR_int_int_int(const cv::Rect* rect_, const cv::Scalar* color_, int thick_, int lt_, int shift_, Result<cv::gapi::wip::draw::Rect>* ocvrs_return) {
		try {
			cv::gapi::wip::draw::Rect ret(*rect_, *color_, thick_, lt_, shift_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::wip::draw::Rect>, ocvrs_return);
	}
	
	void cv_gapi_wip_draw_Rect_Rect(cv::gapi::wip::draw::Rect* ocvrs_return) {
			cv::gapi::wip::draw::Rect ret;
			*ocvrs_return = ret;
	}
	
	void cv_gapi_wip_draw_Text_Text_const_stringR_const_PointR_int_double_const_ScalarR_int_int_bool(const char* text_, const cv::Point* org_, int ff_, double fs_, const cv::Scalar* color_, int thick_, int lt_, bool bottom_left_origin_, Result<cv::gapi::wip::draw::Text*>* ocvrs_return) {
		try {
			cv::gapi::wip::draw::Text* ret = new cv::gapi::wip::draw::Text(std::string(text_), *org_, ff_, fs_, *color_, thick_, lt_, bottom_left_origin_);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::gapi::wip::draw::Text*>, ocvrs_return);
	}
	
	cv::gapi::wip::draw::Text* cv_gapi_wip_draw_Text_Text() {
			cv::gapi::wip::draw::Text* ret = new cv::gapi::wip::draw::Text();
			return ret;
	}
	
	cv::gapi::wip::draw::Text* cv_gapi_wip_draw_Text_implicitClone_const(const cv::gapi::wip::draw::Text* instance) {
			return new cv::gapi::wip::draw::Text(*instance);
	}
	
	void* cv_gapi_wip_draw_Text_propText_const(const cv::gapi::wip::draw::Text* instance) {
			std::string ret = instance->text;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_gapi_wip_draw_Text_propText_string(cv::gapi::wip::draw::Text* instance, char* val) {
			instance->text = std::string(val);
	}
	
	void cv_gapi_wip_draw_Text_propOrg_const(const cv::gapi::wip::draw::Text* instance, cv::Point* ocvrs_return) {
			cv::Point ret = instance->org;
			*ocvrs_return = ret;
	}
	
	void cv_gapi_wip_draw_Text_propOrg_Point(cv::gapi::wip::draw::Text* instance, cv::Point* val) {
			instance->org = *val;
	}
	
	int cv_gapi_wip_draw_Text_propFf_const(const cv::gapi::wip::draw::Text* instance) {
			int ret = instance->ff;
			return ret;
	}
	
	void cv_gapi_wip_draw_Text_propFf_int(cv::gapi::wip::draw::Text* instance, int val) {
			instance->ff = val;
	}
	
	double cv_gapi_wip_draw_Text_propFs_const(const cv::gapi::wip::draw::Text* instance) {
			double ret = instance->fs;
			return ret;
	}
	
	void cv_gapi_wip_draw_Text_propFs_double(cv::gapi::wip::draw::Text* instance, double val) {
			instance->fs = val;
	}
	
	void cv_gapi_wip_draw_Text_propColor_const(const cv::gapi::wip::draw::Text* instance, cv::Scalar* ocvrs_return) {
			cv::Scalar ret = instance->color;
			*ocvrs_return = ret;
	}
	
	void cv_gapi_wip_draw_Text_propColor_Scalar(cv::gapi::wip::draw::Text* instance, cv::Scalar* val) {
			instance->color = *val;
	}
	
	int cv_gapi_wip_draw_Text_propThick_const(const cv::gapi::wip::draw::Text* instance) {
			int ret = instance->thick;
			return ret;
	}
	
	void cv_gapi_wip_draw_Text_propThick_int(cv::gapi::wip::draw::Text* instance, int val) {
			instance->thick = val;
	}
	
	int cv_gapi_wip_draw_Text_propLt_const(const cv::gapi::wip::draw::Text* instance) {
			int ret = instance->lt;
			return ret;
	}
	
	void cv_gapi_wip_draw_Text_propLt_int(cv::gapi::wip::draw::Text* instance, int val) {
			instance->lt = val;
	}
	
	bool cv_gapi_wip_draw_Text_propBottom_left_origin_const(const cv::gapi::wip::draw::Text* instance) {
			bool ret = instance->bottom_left_origin;
			return ret;
	}
	
	void cv_gapi_wip_draw_Text_propBottom_left_origin_bool(cv::gapi::wip::draw::Text* instance, bool val) {
			instance->bottom_left_origin = val;
	}
	
	void cv_gapi_wip_draw_Text_delete(cv::gapi::wip::draw::Text* instance) {
			delete instance;
	}
	
	void cv_util_any_any_const_anyR(const cv::util::any* src, Result<cv::util::any*>* ocvrs_return) {
		try {
			cv::util::any* ret = new cv::util::any(*src);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::util::any*>, ocvrs_return);
	}
	
	void cv_util_any_any_anyR(cv::util::any* src, Result<cv::util::any*>* ocvrs_return) {
		try {
			cv::util::any* ret = new cv::util::any(*src);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::util::any*>, ocvrs_return);
	}
	
	cv::util::any* cv_util_any_any() {
			cv::util::any* ret = new cv::util::any();
			return ret;
	}
	
	cv::util::any* cv_util_any_any_anyRR(cv::util::any* unnamed) {
			cv::util::any* ret = new cv::util::any(std::move(*unnamed));
			return ret;
	}
	
	void cv_util_any_delete(cv::util::any* instance) {
			delete instance;
	}
	
}
