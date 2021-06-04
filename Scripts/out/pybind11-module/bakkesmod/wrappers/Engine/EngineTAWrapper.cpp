void bind_EngineTAWrapper(pybind11::module& m)
{

	pybind11::class_<EngineTAWrapper, std::shared_ptr<EngineTAWrapper>, ObjectWrapper> cl_EngineTAWrapper(m, "EngineTAWrapper");
	cl_EngineTAWrapper.def(pybind11::init<uintptr_t>(), pybind11::arg("mem"));
	cl_EngineTAWrapper.def(pybind11::init<EngineTAWrapper const &>(), pybind11::arg("other"));
	// cl_EngineTAWrapper.def(pybind11::del<>());
	cl_EngineTAWrapper.def("IsNull", [](EngineTAWrapper& cls_) { return cls_.IsNull(); });
	cl_EngineTAWrapper.def("GetbEnableClientPrediction", [](EngineTAWrapper& cls_) { return cls_.GetbEnableClientPrediction(); });
	cl_EngineTAWrapper.def("SetbEnableClientPrediction", [](EngineTAWrapper& cls_, long unsigned int newbEnableClientPrediction) { return cls_.SetbEnableClientPrediction(newbEnableClientPrediction); }, pybind11::arg("newbEnableClientPrediction"));
	cl_EngineTAWrapper.def("GetbClientPhysicsUpdate", [](EngineTAWrapper& cls_) { return cls_.GetbClientPhysicsUpdate(); });
	cl_EngineTAWrapper.def("SetbClientPhysicsUpdate", [](EngineTAWrapper& cls_, long unsigned int newbClientPhysicsUpdate) { return cls_.SetbClientPhysicsUpdate(newbClientPhysicsUpdate); }, pybind11::arg("newbClientPhysicsUpdate"));
	cl_EngineTAWrapper.def("GetbDisableClientCorrections", [](EngineTAWrapper& cls_) { return cls_.GetbDisableClientCorrections(); });
	cl_EngineTAWrapper.def("SetbDisableClientCorrections", [](EngineTAWrapper& cls_, long unsigned int newbDisableClientCorrections) { return cls_.SetbDisableClientCorrections(newbDisableClientCorrections); }, pybind11::arg("newbDisableClientCorrections"));
	cl_EngineTAWrapper.def("GetbDebugClientCorrections", [](EngineTAWrapper& cls_) { return cls_.GetbDebugClientCorrections(); });
	cl_EngineTAWrapper.def("SetbDebugClientCorrections", [](EngineTAWrapper& cls_, long unsigned int newbDebugClientCorrections) { return cls_.SetbDebugClientCorrections(newbDebugClientCorrections); }, pybind11::arg("newbDebugClientCorrections"));
	cl_EngineTAWrapper.def("GetbForceClientCorrection", [](EngineTAWrapper& cls_) { return cls_.GetbForceClientCorrection(); });
	cl_EngineTAWrapper.def("SetbForceClientCorrection", [](EngineTAWrapper& cls_, long unsigned int newbForceClientCorrection) { return cls_.SetbForceClientCorrection(newbForceClientCorrection); }, pybind11::arg("newbForceClientCorrection"));
	cl_EngineTAWrapper.def("GetPhysicsFramerate", [](EngineTAWrapper& cls_) { return cls_.GetPhysicsFramerate(); });
	cl_EngineTAWrapper.def("SetPhysicsFramerate", [](EngineTAWrapper& cls_, float newPhysicsFramerate) { return cls_.SetPhysicsFramerate(newPhysicsFramerate); }, pybind11::arg("newPhysicsFramerate"));
	cl_EngineTAWrapper.def("GetMaxPhysicsSubsteps", [](EngineTAWrapper& cls_) { return cls_.GetMaxPhysicsSubsteps(); });
	cl_EngineTAWrapper.def("SetMaxPhysicsSubsteps", [](EngineTAWrapper& cls_, int newMaxPhysicsSubsteps) { return cls_.SetMaxPhysicsSubsteps(newMaxPhysicsSubsteps); }, pybind11::arg("newMaxPhysicsSubsteps"));
	cl_EngineTAWrapper.def("GetMaxUploadedClientFrames", [](EngineTAWrapper& cls_) { return cls_.GetMaxUploadedClientFrames(); });
	cl_EngineTAWrapper.def("SetMaxUploadedClientFrames", [](EngineTAWrapper& cls_, int newMaxUploadedClientFrames) { return cls_.SetMaxUploadedClientFrames(newMaxUploadedClientFrames); }, pybind11::arg("newMaxUploadedClientFrames"));
	cl_EngineTAWrapper.def("GetMaxClientReplayFrames", [](EngineTAWrapper& cls_) { return cls_.GetMaxClientReplayFrames(); });
	cl_EngineTAWrapper.def("SetMaxClientReplayFrames", [](EngineTAWrapper& cls_, int newMaxClientReplayFrames) { return cls_.SetMaxClientReplayFrames(newMaxClientReplayFrames); }, pybind11::arg("newMaxClientReplayFrames"));
	cl_EngineTAWrapper.def("GetPhysicsFrame", [](EngineTAWrapper& cls_) { return cls_.GetPhysicsFrame(); });
	cl_EngineTAWrapper.def("SetPhysicsFrame", [](EngineTAWrapper& cls_, int newPhysicsFrame) { return cls_.SetPhysicsFrame(newPhysicsFrame); }, pybind11::arg("newPhysicsFrame"));
	cl_EngineTAWrapper.def("GetRenderAlpha", [](EngineTAWrapper& cls_) { return cls_.GetRenderAlpha(); });
	cl_EngineTAWrapper.def("SetRenderAlpha", [](EngineTAWrapper& cls_, float newRenderAlpha) { return cls_.SetRenderAlpha(newRenderAlpha); }, pybind11::arg("newRenderAlpha"));
	cl_EngineTAWrapper.def("GetReplicatedPhysicsFrame", [](EngineTAWrapper& cls_) { return cls_.GetReplicatedPhysicsFrame(); });
	cl_EngineTAWrapper.def("SetReplicatedPhysicsFrame", [](EngineTAWrapper& cls_, int newReplicatedPhysicsFrame) { return cls_.SetReplicatedPhysicsFrame(newReplicatedPhysicsFrame); }, pybind11::arg("newReplicatedPhysicsFrame"));
	cl_EngineTAWrapper.def("GetDirtyPhysicsFrame", [](EngineTAWrapper& cls_) { return cls_.GetDirtyPhysicsFrame(); });
	cl_EngineTAWrapper.def("SetDirtyPhysicsFrame", [](EngineTAWrapper& cls_, int newDirtyPhysicsFrame) { return cls_.SetDirtyPhysicsFrame(newDirtyPhysicsFrame); }, pybind11::arg("newDirtyPhysicsFrame"));
	cl_EngineTAWrapper.def("GetForceCorrectionFrames", [](EngineTAWrapper& cls_) { return cls_.GetForceCorrectionFrames(); });
	cl_EngineTAWrapper.def("SetForceCorrectionFrames", [](EngineTAWrapper& cls_, int newForceCorrectionFrames) { return cls_.SetForceCorrectionFrames(newForceCorrectionFrames); }, pybind11::arg("newForceCorrectionFrames"));
	cl_EngineTAWrapper.def("GetTickNotifyIndex", [](EngineTAWrapper& cls_) { return cls_.GetTickNotifyIndex(); });
	cl_EngineTAWrapper.def("SetTickNotifyIndex", [](EngineTAWrapper& cls_, int newTickNotifyIndex) { return cls_.SetTickNotifyIndex(newTickNotifyIndex); }, pybind11::arg("newTickNotifyIndex"));
	cl_EngineTAWrapper.def("GetShellArchetypePath", [](EngineTAWrapper& cls_) { return cls_.GetShellArchetypePath(); });
	cl_EngineTAWrapper.def("GetLastBugReportTime", [](EngineTAWrapper& cls_) { return cls_.GetLastBugReportTime(); });
	cl_EngineTAWrapper.def("SetLastBugReportTime", [](EngineTAWrapper& cls_, float newLastBugReportTime) { return cls_.SetLastBugReportTime(newLastBugReportTime); }, pybind11::arg("newLastBugReportTime"));
	cl_EngineTAWrapper.def("GetDebugClientCorrectionStartTime", [](EngineTAWrapper& cls_) { return cls_.GetDebugClientCorrectionStartTime(); });
	cl_EngineTAWrapper.def("SetDebugClientCorrectionStartTime", [](EngineTAWrapper& cls_, float newDebugClientCorrectionStartTime) { return cls_.SetDebugClientCorrectionStartTime(newDebugClientCorrectionStartTime); }, pybind11::arg("newDebugClientCorrectionStartTime"));
	cl_EngineTAWrapper.def("GetDebugClientCorrectionCount", [](EngineTAWrapper& cls_) { return cls_.GetDebugClientCorrectionCount(); });
	cl_EngineTAWrapper.def("SetDebugClientCorrectionCount", [](EngineTAWrapper& cls_, int newDebugClientCorrectionCount) { return cls_.SetDebugClientCorrectionCount(newDebugClientCorrectionCount); }, pybind11::arg("newDebugClientCorrectionCount"));
	cl_EngineTAWrapper.def("GetStatGraphs", [](EngineTAWrapper& cls_) { return cls_.GetStatGraphs(); });
	cl_EngineTAWrapper.def("SetStatGraphs", [](EngineTAWrapper& cls_, StatGraphSystemWrapper newStatGraphs) { return cls_.SetStatGraphs(newStatGraphs); }, pybind11::arg("newStatGraphs"));
	cl_EngineTAWrapper.def("GetLastPhysicsDeltaTimeScale", [](EngineTAWrapper& cls_) { return cls_.GetLastPhysicsDeltaTimeScale(); });
	cl_EngineTAWrapper.def("SetLastPhysicsDeltaTimeScale", [](EngineTAWrapper& cls_, float newLastPhysicsDeltaTimeScale) { return cls_.SetLastPhysicsDeltaTimeScale(newLastPhysicsDeltaTimeScale); }, pybind11::arg("newLastPhysicsDeltaTimeScale"));
	cl_EngineTAWrapper.def("DebugClientCorrections2", [](EngineTAWrapper& cls_) { return cls_.DebugClientCorrections2(); });
	cl_EngineTAWrapper.def("GetBulletFixedDeltaTime", [](EngineTAWrapper& cls_) { return cls_.GetBulletFixedDeltaTime(); });
	cl_EngineTAWrapper.def("RunPhysicsStep", [](EngineTAWrapper& cls_, int BulletSceneIndex, float DeltaTime) { return cls_.RunPhysicsStep(BulletSceneIndex, DeltaTime); }, pybind11::arg("BulletSceneIndex"), pybind11::arg("DeltaTime"));
	cl_EngineTAWrapper.def("UpdateReplicatedPhysicsFrame", [](EngineTAWrapper& cls_, int ServerFrame) { return cls_.UpdateReplicatedPhysicsFrame(ServerFrame); }, pybind11::arg("ServerFrame"));
	cl_EngineTAWrapper.def("DebugDedicatedServer", [](EngineTAWrapper& cls_, float ForHowLong) { return cls_.DebugDedicatedServer(ForHowLong); }, pybind11::arg("ForHowLong"));
	cl_EngineTAWrapper.def("GetPhysicsTime", [](EngineTAWrapper& cls_) { return cls_.GetPhysicsTime(); });
	cl_EngineTAWrapper.def("eventRecordAppStart", [](EngineTAWrapper& cls_) { return cls_.eventRecordAppStart(); });
	cl_EngineTAWrapper.def("eventInit", [](EngineTAWrapper& cls_) { return cls_.eventInit(); });
	cl_EngineTAWrapper.def("EventPreAsyncTick", [](EngineTAWrapper& cls_, float DeltaTime) { return cls_.EventPreAsyncTick(DeltaTime); }, pybind11::arg("DeltaTime"));
}
