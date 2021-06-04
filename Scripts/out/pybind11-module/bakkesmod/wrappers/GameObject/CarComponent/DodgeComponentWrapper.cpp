void bind_DodgeComponentWrapper(pybind11::module& m)
{

	pybind11::class_<DodgeComponentWrapper, std::shared_ptr<DodgeComponentWrapper>, CarComponentWrapper> cl_DodgeComponentWrapper(m, "DodgeComponentWrapper");
	cl_DodgeComponentWrapper.def(pybind11::init<uintptr_t>(), pybind11::arg("mem"));
	cl_DodgeComponentWrapper.def(pybind11::init<DodgeComponentWrapper const &>(), pybind11::arg("other"));
	// cl_DodgeComponentWrapper.def(pybind11::del<>());
	cl_DodgeComponentWrapper.def("GetDodgeInputThreshold", [](DodgeComponentWrapper& cls_) { return cls_.GetDodgeInputThreshold(); });
	cl_DodgeComponentWrapper.def("SetDodgeInputThreshold", [](DodgeComponentWrapper& cls_, float newDodgeInputThreshold) { return cls_.SetDodgeInputThreshold(newDodgeInputThreshold); }, pybind11::arg("newDodgeInputThreshold"));
	cl_DodgeComponentWrapper.def("GetSideDodgeImpulse", [](DodgeComponentWrapper& cls_) { return cls_.GetSideDodgeImpulse(); });
	cl_DodgeComponentWrapper.def("SetSideDodgeImpulse", [](DodgeComponentWrapper& cls_, float newSideDodgeImpulse) { return cls_.SetSideDodgeImpulse(newSideDodgeImpulse); }, pybind11::arg("newSideDodgeImpulse"));
	cl_DodgeComponentWrapper.def("GetSideDodgeImpulseMaxSpeedScale", [](DodgeComponentWrapper& cls_) { return cls_.GetSideDodgeImpulseMaxSpeedScale(); });
	cl_DodgeComponentWrapper.def("SetSideDodgeImpulseMaxSpeedScale", [](DodgeComponentWrapper& cls_, float newSideDodgeImpulseMaxSpeedScale) { return cls_.SetSideDodgeImpulseMaxSpeedScale(newSideDodgeImpulseMaxSpeedScale); }, pybind11::arg("newSideDodgeImpulseMaxSpeedScale"));
	cl_DodgeComponentWrapper.def("GetForwardDodgeImpulse", [](DodgeComponentWrapper& cls_) { return cls_.GetForwardDodgeImpulse(); });
	cl_DodgeComponentWrapper.def("SetForwardDodgeImpulse", [](DodgeComponentWrapper& cls_, float newForwardDodgeImpulse) { return cls_.SetForwardDodgeImpulse(newForwardDodgeImpulse); }, pybind11::arg("newForwardDodgeImpulse"));
	cl_DodgeComponentWrapper.def("GetForwardDodgeImpulseMaxSpeedScale", [](DodgeComponentWrapper& cls_) { return cls_.GetForwardDodgeImpulseMaxSpeedScale(); });
	cl_DodgeComponentWrapper.def("SetForwardDodgeImpulseMaxSpeedScale", [](DodgeComponentWrapper& cls_, float newForwardDodgeImpulseMaxSpeedScale) { return cls_.SetForwardDodgeImpulseMaxSpeedScale(newForwardDodgeImpulseMaxSpeedScale); }, pybind11::arg("newForwardDodgeImpulseMaxSpeedScale"));
	cl_DodgeComponentWrapper.def("GetBackwardDodgeImpulse", [](DodgeComponentWrapper& cls_) { return cls_.GetBackwardDodgeImpulse(); });
	cl_DodgeComponentWrapper.def("SetBackwardDodgeImpulse", [](DodgeComponentWrapper& cls_, float newBackwardDodgeImpulse) { return cls_.SetBackwardDodgeImpulse(newBackwardDodgeImpulse); }, pybind11::arg("newBackwardDodgeImpulse"));
	cl_DodgeComponentWrapper.def("GetBackwardDodgeImpulseMaxSpeedScale", [](DodgeComponentWrapper& cls_) { return cls_.GetBackwardDodgeImpulseMaxSpeedScale(); });
	cl_DodgeComponentWrapper.def("SetBackwardDodgeImpulseMaxSpeedScale", [](DodgeComponentWrapper& cls_, float newBackwardDodgeImpulseMaxSpeedScale) { return cls_.SetBackwardDodgeImpulseMaxSpeedScale(newBackwardDodgeImpulseMaxSpeedScale); }, pybind11::arg("newBackwardDodgeImpulseMaxSpeedScale"));
	cl_DodgeComponentWrapper.def("GetSideDodgeTorque", [](DodgeComponentWrapper& cls_) { return cls_.GetSideDodgeTorque(); });
	cl_DodgeComponentWrapper.def("SetSideDodgeTorque", [](DodgeComponentWrapper& cls_, float newSideDodgeTorque) { return cls_.SetSideDodgeTorque(newSideDodgeTorque); }, pybind11::arg("newSideDodgeTorque"));
	cl_DodgeComponentWrapper.def("GetForwardDodgeTorque", [](DodgeComponentWrapper& cls_) { return cls_.GetForwardDodgeTorque(); });
	cl_DodgeComponentWrapper.def("SetForwardDodgeTorque", [](DodgeComponentWrapper& cls_, float newForwardDodgeTorque) { return cls_.SetForwardDodgeTorque(newForwardDodgeTorque); }, pybind11::arg("newForwardDodgeTorque"));
	cl_DodgeComponentWrapper.def("GetDodgeTorqueTime", [](DodgeComponentWrapper& cls_) { return cls_.GetDodgeTorqueTime(); });
	cl_DodgeComponentWrapper.def("SetDodgeTorqueTime", [](DodgeComponentWrapper& cls_, float newDodgeTorqueTime) { return cls_.SetDodgeTorqueTime(newDodgeTorqueTime); }, pybind11::arg("newDodgeTorqueTime"));
	cl_DodgeComponentWrapper.def("GetMinDodgeTorqueTime", [](DodgeComponentWrapper& cls_) { return cls_.GetMinDodgeTorqueTime(); });
	cl_DodgeComponentWrapper.def("SetMinDodgeTorqueTime", [](DodgeComponentWrapper& cls_, float newMinDodgeTorqueTime) { return cls_.SetMinDodgeTorqueTime(newMinDodgeTorqueTime); }, pybind11::arg("newMinDodgeTorqueTime"));
	cl_DodgeComponentWrapper.def("GetDodgeZDamping", [](DodgeComponentWrapper& cls_) { return cls_.GetDodgeZDamping(); });
	cl_DodgeComponentWrapper.def("SetDodgeZDamping", [](DodgeComponentWrapper& cls_, float newDodgeZDamping) { return cls_.SetDodgeZDamping(newDodgeZDamping); }, pybind11::arg("newDodgeZDamping"));
	cl_DodgeComponentWrapper.def("GetDodgeZDampingDelay", [](DodgeComponentWrapper& cls_) { return cls_.GetDodgeZDampingDelay(); });
	cl_DodgeComponentWrapper.def("SetDodgeZDampingDelay", [](DodgeComponentWrapper& cls_, float newDodgeZDampingDelay) { return cls_.SetDodgeZDampingDelay(newDodgeZDampingDelay); }, pybind11::arg("newDodgeZDampingDelay"));
	cl_DodgeComponentWrapper.def("GetDodgeZDampingUpTime", [](DodgeComponentWrapper& cls_) { return cls_.GetDodgeZDampingUpTime(); });
	cl_DodgeComponentWrapper.def("SetDodgeZDampingUpTime", [](DodgeComponentWrapper& cls_, float newDodgeZDampingUpTime) { return cls_.SetDodgeZDampingUpTime(newDodgeZDampingUpTime); }, pybind11::arg("newDodgeZDampingUpTime"));
	cl_DodgeComponentWrapper.def("GetDodgeImpulseScale", [](DodgeComponentWrapper& cls_) { return cls_.GetDodgeImpulseScale(); });
	cl_DodgeComponentWrapper.def("SetDodgeImpulseScale", [](DodgeComponentWrapper& cls_, float newDodgeImpulseScale) { return cls_.SetDodgeImpulseScale(newDodgeImpulseScale); }, pybind11::arg("newDodgeImpulseScale"));
	cl_DodgeComponentWrapper.def("GetDodgeTorqueScale", [](DodgeComponentWrapper& cls_) { return cls_.GetDodgeTorqueScale(); });
	cl_DodgeComponentWrapper.def("SetDodgeTorqueScale", [](DodgeComponentWrapper& cls_, float newDodgeTorqueScale) { return cls_.SetDodgeTorqueScale(newDodgeTorqueScale); }, pybind11::arg("newDodgeTorqueScale"));
	cl_DodgeComponentWrapper.def("GetDodgeTorque", [](DodgeComponentWrapper& cls_) { return cls_.GetDodgeTorque(); });
	cl_DodgeComponentWrapper.def("SetDodgeTorque", [](DodgeComponentWrapper& cls_, Vector newDodgeTorque) { return cls_.SetDodgeTorque(newDodgeTorque); }, pybind11::arg("newDodgeTorque"));
	cl_DodgeComponentWrapper.def("GetDodgeDirection", [](DodgeComponentWrapper& cls_) { return cls_.GetDodgeDirection(); });
	cl_DodgeComponentWrapper.def("SetDodgeDirection", [](DodgeComponentWrapper& cls_, Vector newDodgeDirection) { return cls_.SetDodgeDirection(newDodgeDirection); }, pybind11::arg("newDodgeDirection"));
	cl_DodgeComponentWrapper.def("SetDodgeSettings", [](DodgeComponentWrapper& cls_) { return cls_.SetDodgeSettings(); });
	cl_DodgeComponentWrapper.def("ApplyTorqueForces", [](DodgeComponentWrapper& cls_, float ActiveTime) { return cls_.ApplyTorqueForces(ActiveTime); }, pybind11::arg("ActiveTime"));
	cl_DodgeComponentWrapper.def("ApplyDodgeImpulse", [](DodgeComponentWrapper& cls_) { return cls_.ApplyDodgeImpulse(); });
	cl_DodgeComponentWrapper.def("GetDodgeImpulse2", [](DodgeComponentWrapper& cls_, Vector & DodgeDir) { return cls_.GetDodgeImpulse2(DodgeDir); }, pybind11::arg("DodgeDir"));
	cl_DodgeComponentWrapper.def("ApplyForces", [](DodgeComponentWrapper& cls_, float ActiveTime) { return cls_.ApplyForces(ActiveTime); }, pybind11::arg("ActiveTime"));
	cl_DodgeComponentWrapper.def("CanActivate", [](DodgeComponentWrapper& cls_) { return cls_.CanActivate(); });
	cl_DodgeComponentWrapper.def("OnCreated", [](DodgeComponentWrapper& cls_) { return cls_.OnCreated(); });
}
