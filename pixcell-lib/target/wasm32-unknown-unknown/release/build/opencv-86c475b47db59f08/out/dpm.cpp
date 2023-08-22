#include "ocvrs_common.hpp"
#include <opencv2/dpm.hpp>
#include "dpm_types.hpp"

extern "C" {
	void cv_dpm_DPMDetector_isEmpty_const(const cv::dpm::DPMDetector* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isEmpty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_dpm_DPMDetector_detect_MatR_vectorLObjectDetectionGR(cv::dpm::DPMDetector* instance, cv::Mat* image, std::vector<cv::dpm::DPMDetector::ObjectDetection>* objects, Result_void* ocvrs_return) {
		try {
			instance->detect(*image, *objects);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_dpm_DPMDetector_getClassNames_const(const cv::dpm::DPMDetector* instance, Result<std::vector<std::string>*>* ocvrs_return) {
		try {
			const std::vector<std::string> ret = instance->getClassNames();
			Ok(new const std::vector<std::string>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<std::string>*>, ocvrs_return);
	}
	
	void cv_dpm_DPMDetector_getClassCount_const(const cv::dpm::DPMDetector* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->getClassCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<size_t>, ocvrs_return);
	}
	
	void cv_dpm_DPMDetector_create_const_vectorLstringGR_const_vectorLstringGR(const std::vector<std::string>* filenames, const std::vector<std::string>* classNames, Result<cv::Ptr<cv::dpm::DPMDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::dpm::DPMDetector> ret = cv::dpm::DPMDetector::create(*filenames, *classNames);
			Ok(new cv::Ptr<cv::dpm::DPMDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::dpm::DPMDetector>*>, ocvrs_return);
	}
	
	void cv_dpm_DPMDetector_delete(cv::dpm::DPMDetector* instance) {
			delete instance;
	}
	
	void cv_dpm_DPMDetector_ObjectDetection_ObjectDetection(Result<cv::dpm::DPMDetector::ObjectDetection*>* ocvrs_return) {
		try {
			cv::dpm::DPMDetector::ObjectDetection* ret = new cv::dpm::DPMDetector::ObjectDetection();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::dpm::DPMDetector::ObjectDetection*>, ocvrs_return);
	}
	
	void cv_dpm_DPMDetector_ObjectDetection_ObjectDetection_const_RectR_float_int(const cv::Rect* rect, float score, int classID, Result<cv::dpm::DPMDetector::ObjectDetection*>* ocvrs_return) {
		try {
			cv::dpm::DPMDetector::ObjectDetection* ret = new cv::dpm::DPMDetector::ObjectDetection(*rect, score, classID);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::dpm::DPMDetector::ObjectDetection*>, ocvrs_return);
	}
	
	void cv_dpm_DPMDetector_ObjectDetection_propRect_const(const cv::dpm::DPMDetector::ObjectDetection* instance, cv::Rect* ocvrs_return) {
			cv::Rect ret = instance->rect;
			*ocvrs_return = ret;
	}
	
	void cv_dpm_DPMDetector_ObjectDetection_propRect_Rect(cv::dpm::DPMDetector::ObjectDetection* instance, cv::Rect* val) {
			instance->rect = *val;
	}
	
	float cv_dpm_DPMDetector_ObjectDetection_propScore_const(const cv::dpm::DPMDetector::ObjectDetection* instance) {
			float ret = instance->score;
			return ret;
	}
	
	void cv_dpm_DPMDetector_ObjectDetection_propScore_float(cv::dpm::DPMDetector::ObjectDetection* instance, float val) {
			instance->score = val;
	}
	
	int cv_dpm_DPMDetector_ObjectDetection_propClassID_const(const cv::dpm::DPMDetector::ObjectDetection* instance) {
			int ret = instance->classID;
			return ret;
	}
	
	void cv_dpm_DPMDetector_ObjectDetection_propClassID_int(cv::dpm::DPMDetector::ObjectDetection* instance, int val) {
			instance->classID = val;
	}
	
	void cv_dpm_DPMDetector_ObjectDetection_delete(cv::dpm::DPMDetector::ObjectDetection* instance) {
			delete instance;
	}
	
}
