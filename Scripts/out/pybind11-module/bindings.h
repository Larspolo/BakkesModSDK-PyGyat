#pragma once
void bind_bakkesmodsdk(pybind11::module&);
void bind_linmath(pybind11::module&);
void bind_WrapperStructs(pybind11::module&);
void bind_cvarwrapper(pybind11::module&);
void bind_CVarManagerWrapper(pybind11::module&);
void bind_arraywrapper(pybind11::module&);
void bind_StructArrayWrapper(pybind11::module&);
void bind_ObjectWrapper(pybind11::module&);
void bind_PrimitiveComponentWrapper(pybind11::module&);
void bind_ActorWrapper(pybind11::module&);
void bind_WorldInfoWrapper(pybind11::module&);
void bind_ImageWrapper(pybind11::module&);
void bind_canvaswrapper(pybind11::module&);
void bind_UniqueIDWrapper(pybind11::module&);
void bind_mmrwrapper(pybind11::module&);
void bind_GameEventWrapper(pybind11::module&);
void bind_TeamGameEventWrapper(pybind11::module&);
void bind_ServerWrapper(pybind11::module&);
void bind_TutorialWrapper(pybind11::module&);
void bind_BaseCameraWrapper(pybind11::module&);
void bind_CameraXWrapper(pybind11::module&);
void bind_CameraWrapper(pybind11::module&);
void bind_ReplayServerWrapper(pybind11::module&);
void bind_RBActorWrapper(pybind11::module&);
void bind_VehicleWrapper(pybind11::module&);
void bind_CarWrapper(pybind11::module&);
void bind_EngineTAWrapper(pybind11::module&);
void bind_PlayerControllerWrapper(pybind11::module&);
void bind_PluginManagerWrapper(pybind11::module&);
void bind_GameWrapper(pybind11::module&);
void bind_SequenceObjectWrapper(pybind11::module&);
void bind_SequenceOpWrapper(pybind11::module&);
void bind_SequenceWrapper(pybind11::module&);
void bind_ItemsWrapper(pybind11::module&);
void bind_ClubSettingsWrapper(pybind11::module&);
void bind_ClubDetailsWrapper(pybind11::module&);
void bind_UnrealStringWrapper(pybind11::module&);
void bind_MatchmakingWrapper(pybind11::module&);
void bind_SettingsWrapper(pybind11::module&);
void bind_PlayerReplicationInfoWrapper(pybind11::module&);
void bind_PriXWrapper(pybind11::module&);
void bind_PriWrapper(pybind11::module&);
void bind_ModalWrapper(pybind11::module&);
void bind_TextInputModalWrapper(pybind11::module&);
void bind_StatGraphSystemWrapper(pybind11::module&);
void bind_FXActorWrapper(pybind11::module&);
void bind_ControllerWrapper(pybind11::module&);
void bind_AIControllerWrapper(pybind11::module&);
void bind_CarComponentWrapper(pybind11::module&);
void bind_BoostWrapper(pybind11::module&);
void bind_DodgeComponentWrapper(pybind11::module&);
void bind_JumpComponentWrapper(pybind11::module&);
void bind_DoubleJumpComponentWrapper(pybind11::module&);
void bind_VehicleSimWrapper(pybind11::module&);
void bind_AirControlComponentWrapper(pybind11::module&);
void bind_WheelWrapper(pybind11::module&);
void bind_RumblePickupComponentWrapper(pybind11::module&);
void bind_FlipCarComponentWrapper(pybind11::module&);
void bind_BallWrapper(pybind11::module&);
void bind_GoalWrapper(pybind11::module&);
void bind_TeamInfoWrapper(pybind11::module&);
void bind_TeamWrapper(pybind11::module&);
void bind_VehiclePickupWrapper(pybind11::module&);
void bind_BoostPickupWrapper(pybind11::module&);
void bind_SampleHistoryWrapper(pybind11::module&);
void bind_StatGraphWrapper(pybind11::module&);
void bind_SequenceVariableWrapper(pybind11::module&);
void bind_ProductTemplateWrapper(pybind11::module&);
void bind_ProductWrapper(pybind11::module&);
void bind_OnlineProductWrapper(pybind11::module&);
void bind_ProductAttributeWrapper(pybind11::module&);
void bind_GameSettingPlaylistWrapper(pybind11::module&);
void bind_ReplayDirectorWrapper(pybind11::module&);
void bind_GameEditorWrapper(pybind11::module&);
void bind_ReplayWrapper(pybind11::module&);
void bind_ReplaySoccarWrapper(pybind11::module&);
void bind_SaveDataWrapper(pybind11::module&);
void bind_TrainingEditorSaveDataWrapper(pybind11::module&);
void bind_GameEditorSaveDataWrapper(pybind11::module&);
void bind_TrainingEditorWrapper(pybind11::module&);
void bind_SampleRecordSettingsWrapper(pybind11::module&);
void bind_InputBufferGraphWrapper(pybind11::module&);
void bind_NetStatGraphWrapper(pybind11::module&);
void bind_PerfStatGraphWrapper(pybind11::module&);
void bind_PhysicalMaterialPropertyWrapper(pybind11::module&);
void bind_AttachmentPickup(pybind11::module&);
void bind_TargetedPickup(pybind11::module&);
void bind_SpringPickup(pybind11::module&);
void bind_BallCarSpringPickup(pybind11::module&);
void bind_BallFreezePickup(pybind11::module&);
void bind_BallLassoPickup(pybind11::module&);
void bind_BattarangPickup(pybind11::module&);
void bind_BoostModPickup(pybind11::module&);
void bind_BoostOverridePickup(pybind11::module&);
void bind_CarSpeedPickup(pybind11::module&);
void bind_DemolishPickup(pybind11::module&);
void bind_GrapplingHookPickup(pybind11::module&);
void bind_GravityPickup(pybind11::module&);
void bind_HandbrakeOverridePickup(pybind11::module&);
void bind_HitForcePickup(pybind11::module&);
void bind_SwapperPickup(pybind11::module&);
void bind_TimeBombPickup(pybind11::module&);
void bind_TornadoPickup(pybind11::module&);
void bind_VelcroPickup(pybind11::module&);
void bind_ProductSlotWrapper(pybind11::module&);
void bind_ProductAttribute_AnimatedSkinLabelWrapper(pybind11::module&);
void bind_ProductAttribute_BlueprintCostWrapper(pybind11::module&);
void bind_ProductAttribute_BlueprintWrapper(pybind11::module&);
void bind_ProductAttribute_BodyCompatibilityWrapper(pybind11::module&);
void bind_ProductAttribute_CertifiedWrapper(pybind11::module&);
void bind_ProductAttribute_CurrencyWrapper(pybind11::module&);
void bind_ProductAttribute_PaintedWrapper(pybind11::module&);
void bind_ProductAttribute_QualityWrapper(pybind11::module&);
void bind_ProductAttribute_SpecialEditionWrapper(pybind11::module&);
void bind_ProductAttribute_SpecialEditionSettingsWrapper(pybind11::module&);
void bind_ProductAttribute_TeamEditionUploadWrapper(pybind11::module&);
void bind_ProductAttribute_TeamEditionWrapper(pybind11::module&);
void bind_ProductAttribute_UnlockMethodWrapper(pybind11::module&);
void bind_CertifiedStatDatabaseWrapper(pybind11::module&);
void bind_DataAssetDatabaseWrapper(pybind11::module&);
void bind_DataAssetDatabase_ESportsTeamWrapper(pybind11::module&);
void bind_PaintDatabaseWrapper(pybind11::module&);
void bind_SpecialEditionDatabaseWrapper(pybind11::module&);
void bind_TradeWrapper(pybind11::module&);
void bind_ProductTradeInWrapper(pybind11::module&);
void bind_LoadoutWrapper(pybind11::module&);
void bind_http_structs(pybind11::module&);
void bind_HttpWrapper(pybind11::module&);
void bind_bot_loadout_structs(pybind11::module&);
void bind_bakkesmodplugin(pybind11::module&);
void bind_BasketballPickup(pybind11::module&);
void bind_StartGraphSystemWrapper(pybind11::module&);
void bind_StatEventWrapper(pybind11::module&);

inline void bind_bakkesmod(pybind11::module& m)
{
	bind_bakkesmodsdk(m);
	bind_linmath(m);
	bind_WrapperStructs(m);
	bind_cvarwrapper(m);
	bind_CVarManagerWrapper(m);
	bind_arraywrapper(m);
	bind_StructArrayWrapper(m);
	bind_ObjectWrapper(m);
	bind_PrimitiveComponentWrapper(m);
	bind_ActorWrapper(m);
	bind_WorldInfoWrapper(m);
	bind_ImageWrapper(m);
	bind_canvaswrapper(m);
	bind_UniqueIDWrapper(m);
	bind_mmrwrapper(m);
	bind_GameEventWrapper(m);
	bind_TeamGameEventWrapper(m);
	bind_ServerWrapper(m);
	bind_TutorialWrapper(m);
	bind_BaseCameraWrapper(m);
	bind_CameraXWrapper(m);
	bind_CameraWrapper(m);
	bind_ReplayServerWrapper(m);
	bind_RBActorWrapper(m);
	bind_VehicleWrapper(m);
	bind_CarWrapper(m);
	bind_EngineTAWrapper(m);
	bind_PlayerControllerWrapper(m);
	bind_PluginManagerWrapper(m);
	bind_GameWrapper(m);
	bind_SequenceObjectWrapper(m);
	bind_SequenceOpWrapper(m);
	bind_SequenceWrapper(m);
	bind_ItemsWrapper(m);
	bind_ClubSettingsWrapper(m);
	bind_ClubDetailsWrapper(m);
	bind_UnrealStringWrapper(m);
	bind_MatchmakingWrapper(m);
	bind_SettingsWrapper(m);
	bind_PlayerReplicationInfoWrapper(m);
	bind_PriXWrapper(m);
	bind_PriWrapper(m);
	bind_ModalWrapper(m);
	bind_TextInputModalWrapper(m);
	bind_StatGraphSystemWrapper(m);
	bind_FXActorWrapper(m);
	bind_ControllerWrapper(m);
	bind_AIControllerWrapper(m);
	bind_CarComponentWrapper(m);
	bind_BoostWrapper(m);
	bind_DodgeComponentWrapper(m);
	bind_JumpComponentWrapper(m);
	bind_DoubleJumpComponentWrapper(m);
	bind_VehicleSimWrapper(m);
	bind_AirControlComponentWrapper(m);
	bind_WheelWrapper(m);
	bind_RumblePickupComponentWrapper(m);
	bind_FlipCarComponentWrapper(m);
	bind_BallWrapper(m);
	bind_GoalWrapper(m);
	bind_TeamInfoWrapper(m);
	bind_TeamWrapper(m);
	bind_VehiclePickupWrapper(m);
	bind_BoostPickupWrapper(m);
	bind_SampleHistoryWrapper(m);
	bind_StatGraphWrapper(m);
	bind_SequenceVariableWrapper(m);
	bind_ProductTemplateWrapper(m);
	bind_ProductWrapper(m);
	bind_OnlineProductWrapper(m);
	bind_ProductAttributeWrapper(m);
	bind_GameSettingPlaylistWrapper(m);
	bind_ReplayDirectorWrapper(m);
	bind_GameEditorWrapper(m);
	bind_ReplayWrapper(m);
	bind_ReplaySoccarWrapper(m);
	bind_SaveDataWrapper(m);
	bind_TrainingEditorSaveDataWrapper(m);
	bind_GameEditorSaveDataWrapper(m);
	bind_TrainingEditorWrapper(m);
	bind_SampleRecordSettingsWrapper(m);
	bind_InputBufferGraphWrapper(m);
	bind_NetStatGraphWrapper(m);
	bind_PerfStatGraphWrapper(m);
	bind_PhysicalMaterialPropertyWrapper(m);
	bind_AttachmentPickup(m);
	bind_TargetedPickup(m);
	bind_SpringPickup(m);
	bind_BallCarSpringPickup(m);
	bind_BallFreezePickup(m);
	bind_BallLassoPickup(m);
	bind_BattarangPickup(m);
	bind_BoostModPickup(m);
	bind_BoostOverridePickup(m);
	bind_CarSpeedPickup(m);
	bind_DemolishPickup(m);
	bind_GrapplingHookPickup(m);
	bind_GravityPickup(m);
	bind_HandbrakeOverridePickup(m);
	bind_HitForcePickup(m);
	bind_SwapperPickup(m);
	bind_TimeBombPickup(m);
	bind_TornadoPickup(m);
	bind_VelcroPickup(m);
	bind_ProductSlotWrapper(m);
	bind_ProductAttribute_AnimatedSkinLabelWrapper(m);
	bind_ProductAttribute_BlueprintCostWrapper(m);
	bind_ProductAttribute_BlueprintWrapper(m);
	bind_ProductAttribute_BodyCompatibilityWrapper(m);
	bind_ProductAttribute_CertifiedWrapper(m);
	bind_ProductAttribute_CurrencyWrapper(m);
	bind_ProductAttribute_PaintedWrapper(m);
	bind_ProductAttribute_QualityWrapper(m);
	bind_ProductAttribute_SpecialEditionWrapper(m);
	bind_ProductAttribute_SpecialEditionSettingsWrapper(m);
	bind_ProductAttribute_TeamEditionUploadWrapper(m);
	bind_ProductAttribute_TeamEditionWrapper(m);
	bind_ProductAttribute_UnlockMethodWrapper(m);
	bind_CertifiedStatDatabaseWrapper(m);
	bind_DataAssetDatabaseWrapper(m);
	bind_DataAssetDatabase_ESportsTeamWrapper(m);
	bind_PaintDatabaseWrapper(m);
	bind_SpecialEditionDatabaseWrapper(m);
	bind_TradeWrapper(m);
	bind_ProductTradeInWrapper(m);
	bind_LoadoutWrapper(m);
	bind_http_structs(m);
	bind_HttpWrapper(m);
	bind_bot_loadout_structs(m);
	bind_bakkesmodplugin(m);
	bind_BasketballPickup(m);
	bind_StartGraphSystemWrapper(m);
	bind_StatEventWrapper(m);
}
