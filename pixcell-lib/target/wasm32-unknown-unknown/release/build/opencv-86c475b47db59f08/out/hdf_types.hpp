extern "C" {
	const cv::hdf::HDF5* cv_PtrLcv_hdf_HDF5G_getInnerPtr_const(const cv::Ptr<cv::hdf::HDF5>* instance) {
			return instance->get();
	}
	
	cv::hdf::HDF5* cv_PtrLcv_hdf_HDF5G_getInnerPtrMut(cv::Ptr<cv::hdf::HDF5>* instance) {
			return instance->get();
	}
	
	void cv_PtrLcv_hdf_HDF5G_delete(cv::Ptr<cv::hdf::HDF5>* instance) {
			delete instance;
	}
	
}

