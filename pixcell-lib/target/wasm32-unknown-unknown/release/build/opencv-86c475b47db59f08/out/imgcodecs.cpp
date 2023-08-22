#include "ocvrs_common.hpp"
#include <opencv2/imgcodecs.hpp>
#include "imgcodecs_types.hpp"

extern "C" {
	void cv_haveImageReader_const_StringR(const char* filename, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::haveImageReader(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_haveImageWriter_const_StringR(const char* filename, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::haveImageWriter(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_imcount_const_StringR_int(const char* filename, int flags, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = cv::imcount(std::string(filename), flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<size_t>, ocvrs_return);
	}
	
	void cv_imdecode_const__InputArrayR_int(const cv::_InputArray* buf, int flags, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::imdecode(*buf, flags);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_imdecode_const__InputArrayR_int_MatX(const cv::_InputArray* buf, int flags, cv::Mat* dst, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::imdecode(*buf, flags, dst);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_imdecodemulti_const__InputArrayR_int_vectorLMatGR(const cv::_InputArray* buf, int flags, std::vector<cv::Mat>* mats, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imdecodemulti(*buf, flags, *mats);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_imencode_const_StringR_const__InputArrayR_vectorLunsigned_charGR_const_vectorLintGR(const char* ext, const cv::_InputArray* img, std::vector<unsigned char>* buf, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imencode(std::string(ext), *img, *buf, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_imread_const_StringR_int(const char* filename, int flags, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::imread(std::string(filename), flags);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_imreadmulti_const_StringR_vectorLMatGR_int(const char* filename, std::vector<cv::Mat>* mats, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imreadmulti(std::string(filename), *mats, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_imreadmulti_const_StringR_vectorLMatGR_int_int_int(const char* filename, std::vector<cv::Mat>* mats, int start, int count, int flags, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imreadmulti(std::string(filename), *mats, start, count, flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_imwrite_const_StringR_const__InputArrayR_const_vectorLintGR(const char* filename, const cv::_InputArray* img, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imwrite(std::string(filename), *img, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_imwritemulti_const_StringR_const__InputArrayR_const_vectorLintGR(const char* filename, const cv::_InputArray* img, const std::vector<int>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::imwritemulti(std::string(filename), *img, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_ImageCollection_ImageCollection(Result<cv::ImageCollection*>* ocvrs_return) {
		try {
			cv::ImageCollection* ret = new cv::ImageCollection();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::ImageCollection*>, ocvrs_return);
	}
	
	void cv_ImageCollection_ImageCollection_const_StringR_int(const char* filename, int flags, Result<cv::ImageCollection*>* ocvrs_return) {
		try {
			cv::ImageCollection* ret = new cv::ImageCollection(std::string(filename), flags);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::ImageCollection*>, ocvrs_return);
	}
	
	void cv_ImageCollection_init_const_StringR_int(cv::ImageCollection* instance, const char* img, int flags, Result_void* ocvrs_return) {
		try {
			instance->init(std::string(img), flags);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ImageCollection_size_const(const cv::ImageCollection* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->size();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<size_t>, ocvrs_return);
	}
	
	void cv_ImageCollection_at_int(cv::ImageCollection* instance, int index, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->at(index);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_ImageCollection_operator___int(cv::ImageCollection* instance, int index, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->operator[](index);
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_ImageCollection_releaseCache_int(cv::ImageCollection* instance, int index, Result_void* ocvrs_return) {
		try {
			instance->releaseCache(index);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ImageCollection_begin(cv::ImageCollection* instance, Result<cv::ImageCollection::iterator*>* ocvrs_return) {
		try {
			cv::ImageCollection::iterator ret = instance->begin();
			Ok(new cv::ImageCollection::iterator(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::ImageCollection::iterator*>, ocvrs_return);
	}
	
	void cv_ImageCollection_end(cv::ImageCollection* instance, Result<cv::ImageCollection::iterator*>* ocvrs_return) {
		try {
			cv::ImageCollection::iterator ret = instance->end();
			Ok(new cv::ImageCollection::iterator(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::ImageCollection::iterator*>, ocvrs_return);
	}
	
	void cv_ImageCollection_delete(cv::ImageCollection* instance) {
			delete instance;
	}
	
	void cv_ImageCollection_iterator_iterator_ImageCollectionX(cv::ImageCollection* col, Result<cv::ImageCollection::iterator*>* ocvrs_return) {
		try {
			cv::ImageCollection::iterator* ret = new cv::ImageCollection::iterator(col);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::ImageCollection::iterator*>, ocvrs_return);
	}
	
	void cv_ImageCollection_iterator_iterator_ImageCollectionX_int(cv::ImageCollection* col, int end, Result<cv::ImageCollection::iterator*>* ocvrs_return) {
		try {
			cv::ImageCollection::iterator* ret = new cv::ImageCollection::iterator(col, end);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::ImageCollection::iterator*>, ocvrs_return);
	}
	
	void cv_ImageCollection_iterator_operatorX(cv::ImageCollection::iterator* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->operator*();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_ImageCollection_iterator_operatorAA(cv::ImageCollection::iterator* instance, Result<cv::ImageCollection::iterator*>* ocvrs_return) {
		try {
			cv::ImageCollection::iterator ret = instance->operator++();
			Ok(new cv::ImageCollection::iterator(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::ImageCollection::iterator*>, ocvrs_return);
	}
	
	void cv_ImageCollection_iterator_delete(cv::ImageCollection::iterator* instance) {
			delete instance;
	}
	
}
