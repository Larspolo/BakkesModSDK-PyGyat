void bind_RBActorWrapper(pybind11::module& m)
{

	pybind11::class_<RBActorWrapper, std::shared_ptr<RBActorWrapper>, ActorWrapper> cl_RBActorWrapper(m, "RBActorWrapper");
	cl_RBActorWrapper.def(pybind11::init<uintptr_t>(), pybind11::arg("mem"));
	cl_RBActorWrapper.def(pybind11::init<RBActorWrapper const &>(), pybind11::arg("other"));
	// cl_RBActorWrapper.def(pybind11::del<>());
	cl_RBActorWrapper.def("GetMaxLinearSpeed", [](RBActorWrapper& cls_) { return cls_.GetMaxLinearSpeed(); });
	cl_RBActorWrapper.def("SetMaxLinearSpeed", [](RBActorWrapper& cls_, float newMaxLinearSpeed) { return cls_.SetMaxLinearSpeed(newMaxLinearSpeed); }, pybind11::arg("newMaxLinearSpeed"));
	cl_RBActorWrapper.def("GetMaxAngularSpeed", [](RBActorWrapper& cls_) { return cls_.GetMaxAngularSpeed(); });
	cl_RBActorWrapper.def("SetMaxAngularSpeed", [](RBActorWrapper& cls_, float newMaxAngularSpeed) { return cls_.SetMaxAngularSpeed(newMaxAngularSpeed); }, pybind11::arg("newMaxAngularSpeed"));
	cl_RBActorWrapper.def("GetbDisableSleeping", [](RBActorWrapper& cls_) { return cls_.GetbDisableSleeping(); });
	cl_RBActorWrapper.def("SetbDisableSleeping", [](RBActorWrapper& cls_, long unsigned int newbDisableSleeping) { return cls_.SetbDisableSleeping(newbDisableSleeping); }, pybind11::arg("newbDisableSleeping"));
	cl_RBActorWrapper.def("GetbReplayActor", [](RBActorWrapper& cls_) { return cls_.GetbReplayActor(); });
	cl_RBActorWrapper.def("SetbReplayActor", [](RBActorWrapper& cls_, long unsigned int newbReplayActor) { return cls_.SetbReplayActor(newbReplayActor); }, pybind11::arg("newbReplayActor"));
	cl_RBActorWrapper.def("GetbFrozen", [](RBActorWrapper& cls_) { return cls_.GetbFrozen(); });
	cl_RBActorWrapper.def("SetbFrozen", [](RBActorWrapper& cls_, long unsigned int newbFrozen) { return cls_.SetbFrozen(newbFrozen); }, pybind11::arg("newbFrozen"));
	cl_RBActorWrapper.def("GetbIgnoreSyncing", [](RBActorWrapper& cls_) { return cls_.GetbIgnoreSyncing(); });
	cl_RBActorWrapper.def("SetbIgnoreSyncing", [](RBActorWrapper& cls_, long unsigned int newbIgnoreSyncing) { return cls_.SetbIgnoreSyncing(newbIgnoreSyncing); }, pybind11::arg("newbIgnoreSyncing"));
	cl_RBActorWrapper.def("GetbPhysInitialized", [](RBActorWrapper& cls_) { return cls_.GetbPhysInitialized(); });
	cl_RBActorWrapper.def("GetOldRBState", [](RBActorWrapper& cls_) { return cls_.GetOldRBState(); });
	cl_RBActorWrapper.def("SetOldRBState", [](RBActorWrapper& cls_, RBState newOldRBState) { return cls_.SetOldRBState(newOldRBState); }, pybind11::arg("newOldRBState"));
	cl_RBActorWrapper.def("GetRBState", [](RBActorWrapper& cls_) { return cls_.GetRBState(); });
	cl_RBActorWrapper.def("SetRBState", [](RBActorWrapper& cls_, RBState newRBState) { return cls_.SetRBState(newRBState); }, pybind11::arg("newRBState"));
	cl_RBActorWrapper.def("GetReplicatedRBState", [](RBActorWrapper& cls_) { return cls_.GetReplicatedRBState(); });
	cl_RBActorWrapper.def("SetReplicatedRBState", [](RBActorWrapper& cls_, RBState newReplicatedRBState) { return cls_.SetReplicatedRBState(newReplicatedRBState); }, pybind11::arg("newReplicatedRBState"));
	cl_RBActorWrapper.def("GetClientCorrectionRBState", [](RBActorWrapper& cls_) { return cls_.GetClientCorrectionRBState(); });
	cl_RBActorWrapper.def("SetClientCorrectionRBState", [](RBActorWrapper& cls_, RBState newClientCorrectionRBState) { return cls_.SetClientCorrectionRBState(newClientCorrectionRBState); }, pybind11::arg("newClientCorrectionRBState"));
	cl_RBActorWrapper.def("GetWorldContact", [](RBActorWrapper& cls_) { return cls_.GetWorldContact(); });
	cl_RBActorWrapper.def("SetWorldContact", [](RBActorWrapper& cls_, WorldContactData newWorldContact) { return cls_.SetWorldContact(newWorldContact); }, pybind11::arg("newWorldContact"));
	cl_RBActorWrapper.def("GetSyncErrorLocation", [](RBActorWrapper& cls_) { return cls_.GetSyncErrorLocation(); });
	cl_RBActorWrapper.def("GetSyncErrorAngle", [](RBActorWrapper& cls_) { return cls_.GetSyncErrorAngle(); });
	cl_RBActorWrapper.def("GetSyncErrorAxis", [](RBActorWrapper& cls_) { return cls_.GetSyncErrorAxis(); });
	cl_RBActorWrapper.def("GetFXActorArchetype", [](RBActorWrapper& cls_) { return cls_.GetFXActorArchetype(); });
	cl_RBActorWrapper.def("SetFXActorArchetype", [](RBActorWrapper& cls_, FXActorWrapper newFXActorArchetype) { return cls_.SetFXActorArchetype(newFXActorArchetype); }, pybind11::arg("newFXActorArchetype"));
	cl_RBActorWrapper.def("GetFXActor", [](RBActorWrapper& cls_) { return cls_.GetFXActor(); });
	cl_RBActorWrapper.def("SetFXActor", [](RBActorWrapper& cls_, FXActorWrapper newFXActor) { return cls_.SetFXActor(newFXActor); }, pybind11::arg("newFXActor"));
	cl_RBActorWrapper.def("GetLastRBCollisionsFrame", [](RBActorWrapper& cls_) { return cls_.GetLastRBCollisionsFrame(); });
	cl_RBActorWrapper.def("GetWeldedActor", [](RBActorWrapper& cls_) { return cls_.GetWeldedActor(); });
	cl_RBActorWrapper.def("GetWeldedTo", [](RBActorWrapper& cls_) { return cls_.GetWeldedTo(); });
	cl_RBActorWrapper.def("GetPreWeldMass", [](RBActorWrapper& cls_) { return cls_.GetPreWeldMass(); });
	cl_RBActorWrapper.def("SetMass", [](RBActorWrapper& cls_, float NewMass) { return cls_.SetMass(NewMass); }, pybind11::arg("NewMass"));
	cl_RBActorWrapper.def("SetConstrained3D", [](RBActorWrapper& cls_, Vector & LinearLower, Vector & LinearUpper, Vector & AngularLower, Vector & AngularUpper) { return cls_.SetConstrained3D(LinearLower, LinearUpper, AngularLower, AngularUpper); }, pybind11::arg("LinearLower"), pybind11::arg("LinearUpper"), pybind11::arg("AngularLower"), pybind11::arg("AngularUpper"));
	cl_RBActorWrapper.def("SetConstrained2D", [](RBActorWrapper& cls_, long unsigned int bConstrain2D) { return cls_.SetConstrained2D(bConstrain2D); }, pybind11::arg("bConstrain2D"));
	cl_RBActorWrapper.def("SetPhysicsState", [](RBActorWrapper& cls_, RBState & NewState) { return cls_.SetPhysicsState(NewState); }, pybind11::arg("NewState"));
	cl_RBActorWrapper.def("SetFrozen", [](RBActorWrapper& cls_, long unsigned int bEnabled) { return cls_.SetFrozen(bEnabled); }, pybind11::arg("bEnabled"));
	cl_RBActorWrapper.def("SetMaxAngularSpeed2", [](RBActorWrapper& cls_, float NewMaxSpeed) { return cls_.SetMaxAngularSpeed2(NewMaxSpeed); }, pybind11::arg("NewMaxSpeed"));
	cl_RBActorWrapper.def("SetMaxLinearSpeed2", [](RBActorWrapper& cls_, float NewMaxSpeed) { return cls_.SetMaxLinearSpeed2(NewMaxSpeed); }, pybind11::arg("NewMaxSpeed"));
	cl_RBActorWrapper.def("AddTorque", [](RBActorWrapper& cls_, Vector & Torque, unsigned char ForceMode) { return cls_.AddTorque(Torque, ForceMode); }, pybind11::arg("Torque"), pybind11::arg("ForceMode"));
	cl_RBActorWrapper.def("AddForce", [](RBActorWrapper& cls_, Vector & Force, unsigned char ForceMode) { return cls_.AddForce(Force, ForceMode); }, pybind11::arg("Force"), pybind11::arg("ForceMode"));
	cl_RBActorWrapper.def("UnWeldRBActor", [](RBActorWrapper& cls_, RBActorWrapper Other) { return cls_.UnWeldRBActor(Other); }, pybind11::arg("Other"));
	cl_RBActorWrapper.def("WeldRBActor2", [](RBActorWrapper& cls_, RBActorWrapper Other, Vector & WeldOffset, Rotator & WeldRotation) { return cls_.WeldRBActor2(Other, WeldOffset, WeldRotation); }, pybind11::arg("Other"), pybind11::arg("WeldOffset"), pybind11::arg("WeldRotation"));
	cl_RBActorWrapper.def("ReInitRBPhys", [](RBActorWrapper& cls_) { return cls_.ReInitRBPhys(); });
	cl_RBActorWrapper.def("TerminateRBPhys", [](RBActorWrapper& cls_) { return cls_.TerminateRBPhys(); });
	cl_RBActorWrapper.def("GetCurrentRBLocation", [](RBActorWrapper& cls_) { return cls_.GetCurrentRBLocation(); });
	cl_RBActorWrapper.def("GetCurrentRBState", [](RBActorWrapper& cls_) { return cls_.GetCurrentRBState(); });
	cl_RBActorWrapper.def("GetPhysicsFrame", [](RBActorWrapper& cls_) { return cls_.GetPhysicsFrame(); });
	cl_RBActorWrapper.def("GetPhysicsTime", [](RBActorWrapper& cls_) { return cls_.GetPhysicsTime(); });
	cl_RBActorWrapper.def("InitAk", [](RBActorWrapper& cls_) { return cls_.InitAk(); });
	cl_RBActorWrapper.def("eventPreBeginPlay", [](RBActorWrapper& cls_) { return cls_.eventPreBeginPlay(); });
}
