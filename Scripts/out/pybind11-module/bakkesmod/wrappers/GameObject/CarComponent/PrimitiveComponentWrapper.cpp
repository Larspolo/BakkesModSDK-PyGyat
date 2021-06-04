void bind_PrimitiveComponentWrapper(pybind11::module& m)
{

	pybind11::class_<PrimitiveComponentWrapper, std::shared_ptr<PrimitiveComponentWrapper>, ObjectWrapper> cl_PrimitiveComponentWrapper(m, "PrimitiveComponentWrapper");
	cl_PrimitiveComponentWrapper.def(pybind11::init<uintptr_t>(), pybind11::arg("mem"));
	cl_PrimitiveComponentWrapper.def(pybind11::init<PrimitiveComponentWrapper const &>(), pybind11::arg("other"));
	// cl_PrimitiveComponentWrapper.def(pybind11::del<>());
	cl_PrimitiveComponentWrapper.def("IsNull", [](PrimitiveComponentWrapper& cls_) { return cls_.IsNull(); });
	cl_PrimitiveComponentWrapper.def("GetRBChannel", [](PrimitiveComponentWrapper& cls_) { return cls_.GetRBChannel(); });
	cl_PrimitiveComponentWrapper.def("SetRBChannel", [](PrimitiveComponentWrapper& cls_, unsigned char newRBChannel) { return cls_.SetRBChannel(newRBChannel); }, pybind11::arg("newRBChannel"));
	cl_PrimitiveComponentWrapper.def("GetRBDominanceGroup", [](PrimitiveComponentWrapper& cls_) { return cls_.GetRBDominanceGroup(); });
	cl_PrimitiveComponentWrapper.def("SetRBDominanceGroup", [](PrimitiveComponentWrapper& cls_, unsigned char newRBDominanceGroup) { return cls_.SetRBDominanceGroup(newRBDominanceGroup); }, pybind11::arg("newRBDominanceGroup"));
	cl_PrimitiveComponentWrapper.def("GetbOnlyBlockActorMovement", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbOnlyBlockActorMovement(); });
	cl_PrimitiveComponentWrapper.def("SetbOnlyBlockActorMovement", [](PrimitiveComponentWrapper& cls_, long unsigned int newbOnlyBlockActorMovement) { return cls_.SetbOnlyBlockActorMovement(newbOnlyBlockActorMovement); }, pybind11::arg("newbOnlyBlockActorMovement"));
	cl_PrimitiveComponentWrapper.def("GetHiddenGame", [](PrimitiveComponentWrapper& cls_) { return cls_.GetHiddenGame(); });
	cl_PrimitiveComponentWrapper.def("SetHiddenGame", [](PrimitiveComponentWrapper& cls_, long unsigned int newHiddenGame) { return cls_.SetHiddenGame(newHiddenGame); }, pybind11::arg("newHiddenGame"));
	cl_PrimitiveComponentWrapper.def("GetbOwnerNoSee", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbOwnerNoSee(); });
	cl_PrimitiveComponentWrapper.def("SetbOwnerNoSee", [](PrimitiveComponentWrapper& cls_, long unsigned int newbOwnerNoSee) { return cls_.SetbOwnerNoSee(newbOwnerNoSee); }, pybind11::arg("newbOwnerNoSee"));
	cl_PrimitiveComponentWrapper.def("GetbOnlyOwnerSee", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbOnlyOwnerSee(); });
	cl_PrimitiveComponentWrapper.def("SetbOnlyOwnerSee", [](PrimitiveComponentWrapper& cls_, long unsigned int newbOnlyOwnerSee) { return cls_.SetbOnlyOwnerSee(newbOnlyOwnerSee); }, pybind11::arg("newbOnlyOwnerSee"));
	cl_PrimitiveComponentWrapper.def("GetbIgnoreOwnerHidden", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbIgnoreOwnerHidden(); });
	cl_PrimitiveComponentWrapper.def("SetbIgnoreOwnerHidden", [](PrimitiveComponentWrapper& cls_, long unsigned int newbIgnoreOwnerHidden) { return cls_.SetbIgnoreOwnerHidden(newbIgnoreOwnerHidden); }, pybind11::arg("newbIgnoreOwnerHidden"));
	cl_PrimitiveComponentWrapper.def("GetbUseAsOccluder", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbUseAsOccluder(); });
	cl_PrimitiveComponentWrapper.def("SetbUseAsOccluder", [](PrimitiveComponentWrapper& cls_, long unsigned int newbUseAsOccluder) { return cls_.SetbUseAsOccluder(newbUseAsOccluder); }, pybind11::arg("newbUseAsOccluder"));
	cl_PrimitiveComponentWrapper.def("GetbAllowApproximateOcclusion", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbAllowApproximateOcclusion(); });
	cl_PrimitiveComponentWrapper.def("SetbAllowApproximateOcclusion", [](PrimitiveComponentWrapper& cls_, long unsigned int newbAllowApproximateOcclusion) { return cls_.SetbAllowApproximateOcclusion(newbAllowApproximateOcclusion); }, pybind11::arg("newbAllowApproximateOcclusion"));
	cl_PrimitiveComponentWrapper.def("GetbFirstFrameOcclusion", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbFirstFrameOcclusion(); });
	cl_PrimitiveComponentWrapper.def("SetbFirstFrameOcclusion", [](PrimitiveComponentWrapper& cls_, long unsigned int newbFirstFrameOcclusion) { return cls_.SetbFirstFrameOcclusion(newbFirstFrameOcclusion); }, pybind11::arg("newbFirstFrameOcclusion"));
	cl_PrimitiveComponentWrapper.def("GetbIgnoreNearPlaneIntersection", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbIgnoreNearPlaneIntersection(); });
	cl_PrimitiveComponentWrapper.def("SetbIgnoreNearPlaneIntersection", [](PrimitiveComponentWrapper& cls_, long unsigned int newbIgnoreNearPlaneIntersection) { return cls_.SetbIgnoreNearPlaneIntersection(newbIgnoreNearPlaneIntersection); }, pybind11::arg("newbIgnoreNearPlaneIntersection"));
	cl_PrimitiveComponentWrapper.def("GetbAcceptsStaticDecals", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbAcceptsStaticDecals(); });
	cl_PrimitiveComponentWrapper.def("GetbAcceptsDynamicDecals", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbAcceptsDynamicDecals(); });
	cl_PrimitiveComponentWrapper.def("GetbIsRefreshingDecals", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbIsRefreshingDecals(); });
	cl_PrimitiveComponentWrapper.def("GetCastShadow", [](PrimitiveComponentWrapper& cls_) { return cls_.GetCastShadow(); });
	cl_PrimitiveComponentWrapper.def("SetCastShadow", [](PrimitiveComponentWrapper& cls_, long unsigned int newCastShadow) { return cls_.SetCastShadow(newCastShadow); }, pybind11::arg("newCastShadow"));
	cl_PrimitiveComponentWrapper.def("GetbForceDirectLightMap", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbForceDirectLightMap(); });
	cl_PrimitiveComponentWrapper.def("SetbForceDirectLightMap", [](PrimitiveComponentWrapper& cls_, long unsigned int newbForceDirectLightMap) { return cls_.SetbForceDirectLightMap(newbForceDirectLightMap); }, pybind11::arg("newbForceDirectLightMap"));
	cl_PrimitiveComponentWrapper.def("GetbCastDynamicShadow", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbCastDynamicShadow(); });
	cl_PrimitiveComponentWrapper.def("SetbCastDynamicShadow", [](PrimitiveComponentWrapper& cls_, long unsigned int newbCastDynamicShadow) { return cls_.SetbCastDynamicShadow(newbCastDynamicShadow); }, pybind11::arg("newbCastDynamicShadow"));
	cl_PrimitiveComponentWrapper.def("GetbCastStaticShadow", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbCastStaticShadow(); });
	cl_PrimitiveComponentWrapper.def("SetbCastStaticShadow", [](PrimitiveComponentWrapper& cls_, long unsigned int newbCastStaticShadow) { return cls_.SetbCastStaticShadow(newbCastStaticShadow); }, pybind11::arg("newbCastStaticShadow"));
	cl_PrimitiveComponentWrapper.def("GetbSelfShadowOnly", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbSelfShadowOnly(); });
	cl_PrimitiveComponentWrapper.def("SetbSelfShadowOnly", [](PrimitiveComponentWrapper& cls_, long unsigned int newbSelfShadowOnly) { return cls_.SetbSelfShadowOnly(newbSelfShadowOnly); }, pybind11::arg("newbSelfShadowOnly"));
	cl_PrimitiveComponentWrapper.def("GetbNoModSelfShadow", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbNoModSelfShadow(); });
	cl_PrimitiveComponentWrapper.def("SetbNoModSelfShadow", [](PrimitiveComponentWrapper& cls_, long unsigned int newbNoModSelfShadow) { return cls_.SetbNoModSelfShadow(newbNoModSelfShadow); }, pybind11::arg("newbNoModSelfShadow"));
	cl_PrimitiveComponentWrapper.def("GetbAcceptsDynamicDominantLightShadows", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbAcceptsDynamicDominantLightShadows(); });
	cl_PrimitiveComponentWrapper.def("SetbAcceptsDynamicDominantLightShadows", [](PrimitiveComponentWrapper& cls_, long unsigned int newbAcceptsDynamicDominantLightShadows) { return cls_.SetbAcceptsDynamicDominantLightShadows(newbAcceptsDynamicDominantLightShadows); }, pybind11::arg("newbAcceptsDynamicDominantLightShadows"));
	cl_PrimitiveComponentWrapper.def("GetbCastHiddenShadow", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbCastHiddenShadow(); });
	cl_PrimitiveComponentWrapper.def("SetbCastHiddenShadow", [](PrimitiveComponentWrapper& cls_, long unsigned int newbCastHiddenShadow) { return cls_.SetbCastHiddenShadow(newbCastHiddenShadow); }, pybind11::arg("newbCastHiddenShadow"));
	cl_PrimitiveComponentWrapper.def("GetbCastShadowAsTwoSided", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbCastShadowAsTwoSided(); });
	cl_PrimitiveComponentWrapper.def("SetbCastShadowAsTwoSided", [](PrimitiveComponentWrapper& cls_, long unsigned int newbCastShadowAsTwoSided) { return cls_.SetbCastShadowAsTwoSided(newbCastShadowAsTwoSided); }, pybind11::arg("newbCastShadowAsTwoSided"));
	cl_PrimitiveComponentWrapper.def("GetbAcceptsLights", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbAcceptsLights(); });
	cl_PrimitiveComponentWrapper.def("SetbAcceptsLights", [](PrimitiveComponentWrapper& cls_, long unsigned int newbAcceptsLights) { return cls_.SetbAcceptsLights(newbAcceptsLights); }, pybind11::arg("newbAcceptsLights"));
	cl_PrimitiveComponentWrapper.def("GetbAcceptsDynamicLights", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbAcceptsDynamicLights(); });
	cl_PrimitiveComponentWrapper.def("SetbAcceptsDynamicLights", [](PrimitiveComponentWrapper& cls_, long unsigned int newbAcceptsDynamicLights) { return cls_.SetbAcceptsDynamicLights(newbAcceptsDynamicLights); }, pybind11::arg("newbAcceptsDynamicLights"));
	cl_PrimitiveComponentWrapper.def("GetbUseOnePassLightingOnTranslucency", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbUseOnePassLightingOnTranslucency(); });
	cl_PrimitiveComponentWrapper.def("SetbUseOnePassLightingOnTranslucency", [](PrimitiveComponentWrapper& cls_, long unsigned int newbUseOnePassLightingOnTranslucency) { return cls_.SetbUseOnePassLightingOnTranslucency(newbUseOnePassLightingOnTranslucency); }, pybind11::arg("newbUseOnePassLightingOnTranslucency"));
	cl_PrimitiveComponentWrapper.def("GetbUsePrecomputedShadows", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbUsePrecomputedShadows(); });
	cl_PrimitiveComponentWrapper.def("GetbHasExplicitShadowParent", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbHasExplicitShadowParent(); });
	cl_PrimitiveComponentWrapper.def("GetCollideActors", [](PrimitiveComponentWrapper& cls_) { return cls_.GetCollideActors(); });
	cl_PrimitiveComponentWrapper.def("SetCollideActors", [](PrimitiveComponentWrapper& cls_, long unsigned int newCollideActors) { return cls_.SetCollideActors(newCollideActors); }, pybind11::arg("newCollideActors"));
	cl_PrimitiveComponentWrapper.def("GetAlwaysCheckCollision", [](PrimitiveComponentWrapper& cls_) { return cls_.GetAlwaysCheckCollision(); });
	cl_PrimitiveComponentWrapper.def("SetAlwaysCheckCollision", [](PrimitiveComponentWrapper& cls_, long unsigned int newAlwaysCheckCollision) { return cls_.SetAlwaysCheckCollision(newAlwaysCheckCollision); }, pybind11::arg("newAlwaysCheckCollision"));
	cl_PrimitiveComponentWrapper.def("GetBlockActors", [](PrimitiveComponentWrapper& cls_) { return cls_.GetBlockActors(); });
	cl_PrimitiveComponentWrapper.def("SetBlockActors", [](PrimitiveComponentWrapper& cls_, long unsigned int newBlockActors) { return cls_.SetBlockActors(newBlockActors); }, pybind11::arg("newBlockActors"));
	cl_PrimitiveComponentWrapper.def("GetBlockZeroExtent", [](PrimitiveComponentWrapper& cls_) { return cls_.GetBlockZeroExtent(); });
	cl_PrimitiveComponentWrapper.def("SetBlockZeroExtent", [](PrimitiveComponentWrapper& cls_, long unsigned int newBlockZeroExtent) { return cls_.SetBlockZeroExtent(newBlockZeroExtent); }, pybind11::arg("newBlockZeroExtent"));
	cl_PrimitiveComponentWrapper.def("GetBlockNonZeroExtent", [](PrimitiveComponentWrapper& cls_) { return cls_.GetBlockNonZeroExtent(); });
	cl_PrimitiveComponentWrapper.def("SetBlockNonZeroExtent", [](PrimitiveComponentWrapper& cls_, long unsigned int newBlockNonZeroExtent) { return cls_.SetBlockNonZeroExtent(newBlockNonZeroExtent); }, pybind11::arg("newBlockNonZeroExtent"));
	cl_PrimitiveComponentWrapper.def("GetCanBlockCamera", [](PrimitiveComponentWrapper& cls_) { return cls_.GetCanBlockCamera(); });
	cl_PrimitiveComponentWrapper.def("SetCanBlockCamera", [](PrimitiveComponentWrapper& cls_, long unsigned int newCanBlockCamera) { return cls_.SetCanBlockCamera(newCanBlockCamera); }, pybind11::arg("newCanBlockCamera"));
	cl_PrimitiveComponentWrapper.def("GetBlockRigidBody", [](PrimitiveComponentWrapper& cls_) { return cls_.GetBlockRigidBody(); });
	cl_PrimitiveComponentWrapper.def("SetBlockRigidBody", [](PrimitiveComponentWrapper& cls_, long unsigned int newBlockRigidBody) { return cls_.SetBlockRigidBody(newBlockRigidBody); }, pybind11::arg("newBlockRigidBody"));
	cl_PrimitiveComponentWrapper.def("GetbBlockFootPlacement", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbBlockFootPlacement(); });
	cl_PrimitiveComponentWrapper.def("SetbBlockFootPlacement", [](PrimitiveComponentWrapper& cls_, long unsigned int newbBlockFootPlacement) { return cls_.SetbBlockFootPlacement(newbBlockFootPlacement); }, pybind11::arg("newbBlockFootPlacement"));
	cl_PrimitiveComponentWrapper.def("GetbDisableAllRigidBody", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbDisableAllRigidBody(); });
	cl_PrimitiveComponentWrapper.def("SetbDisableAllRigidBody", [](PrimitiveComponentWrapper& cls_, long unsigned int newbDisableAllRigidBody) { return cls_.SetbDisableAllRigidBody(newbDisableAllRigidBody); }, pybind11::arg("newbDisableAllRigidBody"));
	cl_PrimitiveComponentWrapper.def("GetbSkipRBGeomCreation", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbSkipRBGeomCreation(); });
	cl_PrimitiveComponentWrapper.def("SetbSkipRBGeomCreation", [](PrimitiveComponentWrapper& cls_, long unsigned int newbSkipRBGeomCreation) { return cls_.SetbSkipRBGeomCreation(newbSkipRBGeomCreation); }, pybind11::arg("newbSkipRBGeomCreation"));
	cl_PrimitiveComponentWrapper.def("GetbNotifyRigidBodyCollision", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbNotifyRigidBodyCollision(); });
	cl_PrimitiveComponentWrapper.def("SetbNotifyRigidBodyCollision", [](PrimitiveComponentWrapper& cls_, long unsigned int newbNotifyRigidBodyCollision) { return cls_.SetbNotifyRigidBodyCollision(newbNotifyRigidBodyCollision); }, pybind11::arg("newbNotifyRigidBodyCollision"));
	cl_PrimitiveComponentWrapper.def("GetbFluidDrain", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbFluidDrain(); });
	cl_PrimitiveComponentWrapper.def("SetbFluidDrain", [](PrimitiveComponentWrapper& cls_, long unsigned int newbFluidDrain) { return cls_.SetbFluidDrain(newbFluidDrain); }, pybind11::arg("newbFluidDrain"));
	cl_PrimitiveComponentWrapper.def("GetbFluidTwoWay", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbFluidTwoWay(); });
	cl_PrimitiveComponentWrapper.def("SetbFluidTwoWay", [](PrimitiveComponentWrapper& cls_, long unsigned int newbFluidTwoWay) { return cls_.SetbFluidTwoWay(newbFluidTwoWay); }, pybind11::arg("newbFluidTwoWay"));
	cl_PrimitiveComponentWrapper.def("GetbIgnoreRadialImpulse", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbIgnoreRadialImpulse(); });
	cl_PrimitiveComponentWrapper.def("SetbIgnoreRadialImpulse", [](PrimitiveComponentWrapper& cls_, long unsigned int newbIgnoreRadialImpulse) { return cls_.SetbIgnoreRadialImpulse(newbIgnoreRadialImpulse); }, pybind11::arg("newbIgnoreRadialImpulse"));
	cl_PrimitiveComponentWrapper.def("GetbIgnoreRadialForce", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbIgnoreRadialForce(); });
	cl_PrimitiveComponentWrapper.def("SetbIgnoreRadialForce", [](PrimitiveComponentWrapper& cls_, long unsigned int newbIgnoreRadialForce) { return cls_.SetbIgnoreRadialForce(newbIgnoreRadialForce); }, pybind11::arg("newbIgnoreRadialForce"));
	cl_PrimitiveComponentWrapper.def("GetbIgnoreForceField", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbIgnoreForceField(); });
	cl_PrimitiveComponentWrapper.def("SetbIgnoreForceField", [](PrimitiveComponentWrapper& cls_, long unsigned int newbIgnoreForceField) { return cls_.SetbIgnoreForceField(newbIgnoreForceField); }, pybind11::arg("newbIgnoreForceField"));
	cl_PrimitiveComponentWrapper.def("GetbUseCompartment", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbUseCompartment(); });
	cl_PrimitiveComponentWrapper.def("SetbUseCompartment", [](PrimitiveComponentWrapper& cls_, long unsigned int newbUseCompartment) { return cls_.SetbUseCompartment(newbUseCompartment); }, pybind11::arg("newbUseCompartment"));
	cl_PrimitiveComponentWrapper.def("GetAlwaysLoadOnClient", [](PrimitiveComponentWrapper& cls_) { return cls_.GetAlwaysLoadOnClient(); });
	cl_PrimitiveComponentWrapper.def("SetAlwaysLoadOnClient", [](PrimitiveComponentWrapper& cls_, long unsigned int newAlwaysLoadOnClient) { return cls_.SetAlwaysLoadOnClient(newAlwaysLoadOnClient); }, pybind11::arg("newAlwaysLoadOnClient"));
	cl_PrimitiveComponentWrapper.def("GetAlwaysLoadOnServer", [](PrimitiveComponentWrapper& cls_) { return cls_.GetAlwaysLoadOnServer(); });
	cl_PrimitiveComponentWrapper.def("SetAlwaysLoadOnServer", [](PrimitiveComponentWrapper& cls_, long unsigned int newAlwaysLoadOnServer) { return cls_.SetAlwaysLoadOnServer(newAlwaysLoadOnServer); }, pybind11::arg("newAlwaysLoadOnServer"));
	cl_PrimitiveComponentWrapper.def("GetbIgnoreHiddenActorsMembership", [](PrimitiveComponentWrapper& cls_) { return cls_.GetbIgnoreHiddenActorsMembership(); });
	cl_PrimitiveComponentWrapper.def("SetbIgnoreHiddenActorsMembership", [](PrimitiveComponentWrapper& cls_, long unsigned int newbIgnoreHiddenActorsMembership) { return cls_.SetbIgnoreHiddenActorsMembership(newbIgnoreHiddenActorsMembership); }, pybind11::arg("newbIgnoreHiddenActorsMembership"));
	cl_PrimitiveComponentWrapper.def("GetAbsoluteTranslation", [](PrimitiveComponentWrapper& cls_) { return cls_.GetAbsoluteTranslation(); });
	cl_PrimitiveComponentWrapper.def("SetAbsoluteTranslation", [](PrimitiveComponentWrapper& cls_, long unsigned int newAbsoluteTranslation) { return cls_.SetAbsoluteTranslation(newAbsoluteTranslation); }, pybind11::arg("newAbsoluteTranslation"));
	cl_PrimitiveComponentWrapper.def("GetAbsoluteRotation", [](PrimitiveComponentWrapper& cls_) { return cls_.GetAbsoluteRotation(); });
	cl_PrimitiveComponentWrapper.def("SetAbsoluteRotation", [](PrimitiveComponentWrapper& cls_, long unsigned int newAbsoluteRotation) { return cls_.SetAbsoluteRotation(newAbsoluteRotation); }, pybind11::arg("newAbsoluteRotation"));
	cl_PrimitiveComponentWrapper.def("GetAbsoluteScale", [](PrimitiveComponentWrapper& cls_) { return cls_.GetAbsoluteScale(); });
	cl_PrimitiveComponentWrapper.def("SetAbsoluteScale", [](PrimitiveComponentWrapper& cls_, long unsigned int newAbsoluteScale) { return cls_.SetAbsoluteScale(newAbsoluteScale); }, pybind11::arg("newAbsoluteScale"));
	cl_PrimitiveComponentWrapper.def("GetVisibilityId", [](PrimitiveComponentWrapper& cls_) { return cls_.GetVisibilityId(); });
	cl_PrimitiveComponentWrapper.def("SetVisibilityId", [](PrimitiveComponentWrapper& cls_, int newVisibilityId) { return cls_.SetVisibilityId(newVisibilityId); }, pybind11::arg("newVisibilityId"));
	cl_PrimitiveComponentWrapper.def("GetTranslation", [](PrimitiveComponentWrapper& cls_) { return cls_.GetTranslation(); });
	cl_PrimitiveComponentWrapper.def("SetTranslation", [](PrimitiveComponentWrapper& cls_, Vector newTranslation) { return cls_.SetTranslation(newTranslation); }, pybind11::arg("newTranslation"));
	cl_PrimitiveComponentWrapper.def("GetRotation", [](PrimitiveComponentWrapper& cls_) { return cls_.GetRotation(); });
	cl_PrimitiveComponentWrapper.def("SetRotation", [](PrimitiveComponentWrapper& cls_, Rotator newRotation) { return cls_.SetRotation(newRotation); }, pybind11::arg("newRotation"));
	cl_PrimitiveComponentWrapper.def("GetScale", [](PrimitiveComponentWrapper& cls_) { return cls_.GetScale(); });
	cl_PrimitiveComponentWrapper.def("SetScale", [](PrimitiveComponentWrapper& cls_, float newScale) { return cls_.SetScale(newScale); }, pybind11::arg("newScale"));
	cl_PrimitiveComponentWrapper.def("GetScale3D", [](PrimitiveComponentWrapper& cls_) { return cls_.GetScale3D(); });
	cl_PrimitiveComponentWrapper.def("SetScale3D", [](PrimitiveComponentWrapper& cls_, Vector newScale3D) { return cls_.SetScale3D(newScale3D); }, pybind11::arg("newScale3D"));
	cl_PrimitiveComponentWrapper.def("GetBoundsScale", [](PrimitiveComponentWrapper& cls_) { return cls_.GetBoundsScale(); });
	cl_PrimitiveComponentWrapper.def("SetBoundsScale", [](PrimitiveComponentWrapper& cls_, float newBoundsScale) { return cls_.SetBoundsScale(newBoundsScale); }, pybind11::arg("newBoundsScale"));
	cl_PrimitiveComponentWrapper.def("SetLastSubmitTime", [](PrimitiveComponentWrapper& cls_, float newLastSubmitTime) { return cls_.SetLastSubmitTime(newLastSubmitTime); }, pybind11::arg("newLastSubmitTime"));
	cl_PrimitiveComponentWrapper.def("GetLastRenderTime", [](PrimitiveComponentWrapper& cls_) { return cls_.GetLastRenderTime(); });
	cl_PrimitiveComponentWrapper.def("GetScriptRigidBodyCollisionThreshold", [](PrimitiveComponentWrapper& cls_) { return cls_.GetScriptRigidBodyCollisionThreshold(); });
	cl_PrimitiveComponentWrapper.def("SetScriptRigidBodyCollisionThreshold", [](PrimitiveComponentWrapper& cls_, float newScriptRigidBodyCollisionThreshold) { return cls_.SetScriptRigidBodyCollisionThreshold(newScriptRigidBodyCollisionThreshold); }, pybind11::arg("newScriptRigidBodyCollisionThreshold"));
	cl_PrimitiveComponentWrapper.def("TermRBPhys", [](PrimitiveComponentWrapper& cls_) { return cls_.TermRBPhys(); });
	cl_PrimitiveComponentWrapper.def("InitRBPhys", [](PrimitiveComponentWrapper& cls_) { return cls_.InitRBPhys(); });
	cl_PrimitiveComponentWrapper.def("SetNotifyRigidBodyCollision", [](PrimitiveComponentWrapper& cls_, long unsigned int bNewNotifyRigidBodyCollision) { return cls_.SetNotifyRigidBodyCollision(bNewNotifyRigidBodyCollision); }, pybind11::arg("bNewNotifyRigidBodyCollision"));
	cl_PrimitiveComponentWrapper.def("SetRBChannel2", [](PrimitiveComponentWrapper& cls_, unsigned char Channel) { return cls_.SetRBChannel2(Channel); }, pybind11::arg("Channel"));
	cl_PrimitiveComponentWrapper.def("SetRBCollidesWithChannel", [](PrimitiveComponentWrapper& cls_, unsigned char Channel, long unsigned int bNewCollides) { return cls_.SetRBCollidesWithChannel(Channel, bNewCollides); }, pybind11::arg("Channel"), pybind11::arg("bNewCollides"));
	cl_PrimitiveComponentWrapper.def("SetBlockRigidBody2", [](PrimitiveComponentWrapper& cls_, long unsigned int bNewBlockRigidBody) { return cls_.SetBlockRigidBody2(bNewBlockRigidBody); }, pybind11::arg("bNewBlockRigidBody"));
	cl_PrimitiveComponentWrapper.def("RetardRBLinearVelocity", [](PrimitiveComponentWrapper& cls_, Vector & RetardDir, float VelScale) { return cls_.RetardRBLinearVelocity(RetardDir, VelScale); }, pybind11::arg("RetardDir"), pybind11::arg("VelScale"));
	cl_PrimitiveComponentWrapper.def("SetRBAngularVelocity", [](PrimitiveComponentWrapper& cls_, Vector & NewAngVel, long unsigned int bAddToCurrent) { return cls_.SetRBAngularVelocity(NewAngVel, bAddToCurrent); }, pybind11::arg("NewAngVel"), pybind11::arg("bAddToCurrent"));
	cl_PrimitiveComponentWrapper.def("SetRBLinearVelocity", [](PrimitiveComponentWrapper& cls_, Vector & NewVel, long unsigned int bAddToCurrent) { return cls_.SetRBLinearVelocity(NewVel, bAddToCurrent); }, pybind11::arg("NewVel"), pybind11::arg("bAddToCurrent"));
	cl_PrimitiveComponentWrapper.def("AddRadialForce", [](PrimitiveComponentWrapper& cls_, Vector & Origin, float Radius, float Strength, unsigned char Falloff) { return cls_.AddRadialForce(Origin, Radius, Strength, Falloff); }, pybind11::arg("Origin"), pybind11::arg("Radius"), pybind11::arg("Strength"), pybind11::arg("Falloff"));
	cl_PrimitiveComponentWrapper.def("AddRadialImpulse", [](PrimitiveComponentWrapper& cls_, Vector & Origin, float Radius, float Strength, unsigned char Falloff, long unsigned int bVelChange) { return cls_.AddRadialImpulse(Origin, Radius, Strength, Falloff, bVelChange); }, pybind11::arg("Origin"), pybind11::arg("Radius"), pybind11::arg("Strength"), pybind11::arg("Falloff"), pybind11::arg("bVelChange"));
}
