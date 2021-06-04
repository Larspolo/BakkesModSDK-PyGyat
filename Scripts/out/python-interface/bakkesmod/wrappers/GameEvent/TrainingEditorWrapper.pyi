from typing import Callable, List, Tuple, Dict, Any
from enum import Enum

class TrainingEditorWrapper():
    # Public:
    # TrainingEditorWrapper::TrainingEditorWrapper(uintptr_t mem) [constructor]
    def __init__(self, mem: int) -> None: ...

    # TrainingEditorWrapper::TrainingEditorWrapper(TrainingEditorWrapper const & other) [constructor]

    # TrainingEditorWrapper & TrainingEditorWrapper::operator=(TrainingEditorWrapper rhs) [member operator]

    # TrainingEditorWrapper::~TrainingEditorWrapper() [destructor]
    def __del__(self) -> None: ...

    # float TrainingEditorWrapper::GetMinRoundTime() [member function]
    def GetMinRoundTime(self) -> float: ...

    # void TrainingEditorWrapper::SetMinRoundTime(float newMinRoundTime) [member function]
    def SetMinRoundTime(self, newMinRoundTime: float) -> None: ...

    # float TrainingEditorWrapper::GetMaxRoundTime() [member function]
    def GetMaxRoundTime(self) -> float: ...

    # void TrainingEditorWrapper::SetMaxRoundTime(float newMaxRoundTime) [member function]
    def SetMaxRoundTime(self, newMaxRoundTime: float) -> None: ...

    # long unsigned int TrainingEditorWrapper::GetbNoEditor() [member function]
    def GetbNoEditor(self) -> bool: ...

    # void TrainingEditorWrapper::SetbNoEditor(long unsigned int newbNoEditor) [member function]
    def SetbNoEditor(self, newbNoEditor: bool) -> None: ...

    # long unsigned int TrainingEditorWrapper::GetbDisplayedRedoPenaltyMessage() [member function]
    def GetbDisplayedRedoPenaltyMessage(self) -> bool: ...

    # void TrainingEditorWrapper::SetbDisplayedRedoPenaltyMessage(long unsigned int newbDisplayedRedoPenaltyMessage) [member function]
    def SetbDisplayedRedoPenaltyMessage(self, newbDisplayedRedoPenaltyMessage: bool) -> None: ...

    # long unsigned int TrainingEditorWrapper::GetbUnsavedChanges() [member function]
    def GetbUnsavedChanges(self) -> bool: ...

    # void TrainingEditorWrapper::SetbUnsavedChanges(long unsigned int newbUnsavedChanges) [member function]
    def SetbUnsavedChanges(self, newbUnsavedChanges: bool) -> None: ...

    # int TrainingEditorWrapper::GetPointsScoredThisRound() [member function]
    def GetPointsScoredThisRound(self) -> int: ...

    # void TrainingEditorWrapper::SetPointsScoredThisRound(int newPointsScoredThisRound) [member function]
    def SetPointsScoredThisRound(self, newPointsScoredThisRound: int) -> None: ...

    # int TrainingEditorWrapper::GetShotAttempt() [member function]
    def GetShotAttempt(self) -> int: ...

    # void TrainingEditorWrapper::SetShotAttempt(int newShotAttempt) [member function]
    def SetShotAttempt(self, newShotAttempt: int) -> None: ...

    # int TrainingEditorWrapper::GetGoalieScore() [member function]
    def GetGoalieScore(self) -> int: ...

    # void TrainingEditorWrapper::SetGoalieScore(int newGoalieScore) [member function]
    def SetGoalieScore(self, newGoalieScore: int) -> None: ...

    # unsigned char TrainingEditorWrapper::GetPlayTestType() [member function]
    def GetPlayTestType(self) -> int: ...

    # void TrainingEditorWrapper::SetPlayTestType(unsigned char newPlayTestType) [member function]
    def SetPlayTestType(self, newPlayTestType: int) -> None: ...

    # ArrayWrapper<ActorWrapper> TrainingEditorWrapper::GetGoalMeshBlockers() [member function]
    def GetGoalMeshBlockers(self) -> ArrayWrapper_ActorWrapper: ...

    # ActorWrapper TrainingEditorWrapper::GetGoalMeshBlockerArchetype() [member function]
    def GetGoalMeshBlockerArchetype(self) -> ActorWrapper: ...

    # void TrainingEditorWrapper::SetGoalMeshBlockerArchetype(ActorWrapper newGoalMeshBlockerArchetype) [member function]
    def SetGoalMeshBlockerArchetype(self, newGoalMeshBlockerArchetype: ActorWrapper) -> None: ...

    # GameEditorSaveDataWrapper TrainingEditorWrapper::GetTrainingData() [member function]
    def GetTrainingData(self) -> GameEditorSaveDataWrapper: ...

    # void TrainingEditorWrapper::SetTrainingData(GameEditorSaveDataWrapper newTrainingData) [member function]
    def SetTrainingData(self, newTrainingData: GameEditorSaveDataWrapper) -> None: ...

    # float TrainingEditorWrapper::GetSaveDelayTime() [member function]
    def GetSaveDelayTime(self) -> float: ...

    # void TrainingEditorWrapper::SetSaveDelayTime(float newSaveDelayTime) [member function]
    def SetSaveDelayTime(self, newSaveDelayTime: float) -> None: ...

    # float TrainingEditorWrapper::GetSaveCooldown() [member function]
    def GetSaveCooldown(self) -> float: ...

    # void TrainingEditorWrapper::SetSaveCooldown(float newSaveCooldown) [member function]
    def SetSaveCooldown(self, newSaveCooldown: float) -> None: ...

    # UnrealStringWrapper TrainingEditorWrapper::GetTrainingFileName() [member function]
    def GetTrainingFileName(self) -> UnrealStringWrapper: ...

    # void TrainingEditorWrapper::OnLoadingMovieClosed() [member function]
    def OnLoadingMovieClosed(self) -> None: ...

    # void TrainingEditorWrapper::TagHistoryChanges() [member function]
    def TagHistoryChanges(self) -> None: ...

    # void TrainingEditorWrapper::MarkAsDirty() [member function]
    def MarkAsDirty(self) -> None: ...

    # void TrainingEditorWrapper::ForceTagHistoryChanges() [member function]
    def ForceTagHistoryChanges(self) -> None: ...

    # void TrainingEditorWrapper::SetTracedCrosshairActor(PlayerControllerWrapper PC, ActorWrapper NewActor) [member function]
    def SetTracedCrosshairActor(self, PC: PlayerControllerWrapper, NewActor: ActorWrapper) -> None: ...

    # bool TrainingEditorWrapper::DestroyBall(BallWrapper Ball) [member function]
    def DestroyBall(self, Ball: BallWrapper) -> bool: ...

    # bool TrainingEditorWrapper::AllowDynamicCrowd() [member function]
    def AllowDynamicCrowd(self) -> bool: ...

    # void TrainingEditorWrapper::BroadcastGoMessage() [member function]
    def BroadcastGoMessage(self) -> None: ...

    # int TrainingEditorWrapper::GetTotalRounds() [member function]
    def GetTotalRounds(self) -> int: ...

    # unsigned char TrainingEditorWrapper::GetDifficulty() [member function]
    def GetDifficulty(self) -> int: ...

    # unsigned char TrainingEditorWrapper::GetTrainingType() [member function]
    def GetTrainingType(self) -> int: ...

    # void TrainingEditorWrapper::Save2() [member function]
    def Save2(self) -> None: ...

    # void TrainingEditorWrapper::OnTrainingModeLoaded() [member function]
    def OnTrainingModeLoaded(self) -> None: ...

    # void TrainingEditorWrapper::DuplicateRound(int Index) [member function]
    def DuplicateRound(self, Index: int) -> None: ...

    # void TrainingEditorWrapper::ReorderRound(int FromIndex, int ToIndex) [member function]
    def ReorderRound(self, FromIndex: int, ToIndex: int) -> None: ...

    # void TrainingEditorWrapper::SetRoundTimeLimit(float NewRoundTime) [member function]
    def SetRoundTimeLimit(self, NewRoundTime: float) -> None: ...

    # bool TrainingEditorWrapper::HandleNextGame() [member function]
    def HandleNextGame(self) -> bool: ...

    # void TrainingEditorWrapper::ResetBalls() [member function]
    def ResetBalls(self) -> None: ...

    # void TrainingEditorWrapper::Load2(std::string SaveName, PlayerControllerWrapper PC) [member function]
    def Load2(self, SaveName: str, PC: PlayerControllerWrapper) -> None: ...

    # void TrainingEditorWrapper::DestroyGoalMeshBlockers() [member function]
    def DestroyGoalMeshBlockers(self) -> None: ...

    # void TrainingEditorWrapper::UpdateGoalMeshBlocker() [member function]
    def UpdateGoalMeshBlocker(self) -> None: ...

    # int TrainingEditorWrapper::GetScore() [member function]
    def GetScore(self) -> int: ...

    # void TrainingEditorWrapper::RemovePointsFromScore(int PointsToRemove, int TeamIndex) [member function]
    def RemovePointsFromScore(self, PointsToRemove: int, TeamIndex: int) -> None: ...

    # bool TrainingEditorWrapper::ShowScorerGoalMessage() [member function]
    def ShowScorerGoalMessage(self) -> bool: ...

    # void TrainingEditorWrapper::ShowResetRoundMessage() [member function]
    def ShowResetRoundMessage(self) -> None: ...

    # bool TrainingEditorWrapper::ShowPenaltyMessage() [member function]
    def ShowPenaltyMessage(self) -> bool: ...

    # int TrainingEditorWrapper::GetPlayerTeamNumber() [member function]
    def GetPlayerTeamNumber(self) -> int: ...

    # int TrainingEditorWrapper::GetBallGoalScoreNumber() [member function]
    def GetBallGoalScoreNumber(self) -> int: ...

    # void TrainingEditorWrapper::RemoveAllPointsFromScore(int TeamIndex) [member function]
    def RemoveAllPointsFromScore(self, TeamIndex: int) -> None: ...

    # bool TrainingEditorWrapper::IncrementRound(long unsigned int bLoop) [member function]
    def IncrementRound(self, bLoop: bool) -> bool: ...

    # Vector TrainingEditorWrapper::AdjustToFloorLocation(Vector & TraceStart, Vector & CollsionExtent) [member function]
    def AdjustToFloorLocation(self, TraceStart: Vector, CollsionExtent: Vector) -> Vector: ...

    # ActorWrapper TrainingEditorWrapper::SpawnArchetypeAtAndAdjustToFloor(ActorWrapper Archetype, Vector & SpawnLocation, Rotator & SpawnRotation) [member function]
    def SpawnArchetypeAtAndAdjustToFloor(self, Archetype: ActorWrapper, SpawnLocation: Vector, SpawnRotation: Rotator) -> ActorWrapper: ...

    # void TrainingEditorWrapper::SpawnBallAndStartPointAt(Vector & BallSpawnLocation, Rotator & BallSpawnRotation, Vector & StartPointSpawnLocation, Rotator & StartPointSpawnRotation) [member function]
    def SpawnBallAndStartPointAt(self, BallSpawnLocation: Vector, BallSpawnRotation: Rotator, StartPointSpawnLocation: Vector, StartPointSpawnRotation: Rotator) -> None: ...

    # void TrainingEditorWrapper::SetupDefaultRound() [member function]
    def SetupDefaultRound(self) -> None: ...

    # void TrainingEditorWrapper::SwitchToRoundNumber(int RoundNumber, long unsigned int BackupCurrentRound) [member function]
    def SwitchToRoundNumber(self, RoundNumber: int, BackupCurrentRound: bool) -> None: ...

    # void TrainingEditorWrapper::DeleteRound(int RoundToDelete) [member function]
    def DeleteRound(self, RoundToDelete: int) -> None: ...

    # void TrainingEditorWrapper::RestartPlayTest() [member function]
    def RestartPlayTest(self) -> None: ...

    # void TrainingEditorWrapper::EndPlayTest() [member function]
    def EndPlayTest(self) -> None: ...

    # void TrainingEditorWrapper::StartPlayTest(unsigned char InPlayTestType) [member function]
    def StartPlayTest(self, InPlayTestType: int) -> None: ...

    # bool TrainingEditorWrapper::CanPlayTestRoundNumber(int RoundNumber) [member function]
    def CanPlayTestRoundNumber(self, RoundNumber: int) -> bool: ...

    # void TrainingEditorWrapper::SetUnsavedChanges(long unsigned int bInUnsavedChanges) [member function]
    def SetUnsavedChanges(self, bInUnsavedChanges: bool) -> None: ...

    # void TrainingEditorWrapper::UpdateActiveRoundData() [member function]
    def UpdateActiveRoundData(self) -> None: ...

    # void TrainingEditorWrapper::StartNewRound() [member function]
    def StartNewRound(self) -> None: ...

    # bool TrainingEditorWrapper::IsValidRoundIndex(int ArrayIndex) [member function]
    def IsValidRoundIndex(self, ArrayIndex: int) -> bool: ...

    # void TrainingEditorWrapper::AddLocalPlayer(PlayerControllerWrapper Player) [member function]
    def AddLocalPlayer(self, Player: PlayerControllerWrapper) -> None: ...

    # void TrainingEditorWrapper::OnInit() [member function]
    def OnInit(self) -> None: ...

    # void TrainingEditorWrapper::eventDestroyed() [member function]
    def eventDestroyed(self) -> None: ...

    # void TrainingEditorWrapper::eventPostBeginPlay() [member function]
    def eventPostBeginPlay(self) -> None: ...

    # void TrainingEditorWrapper::EventSaveResult(long unsigned int bSuccess) [member function]
    def EventSaveResult(self, bSuccess: bool) -> None: ...

    # void TrainingEditorWrapper::EventUnsavedChanges(long unsigned int bOutUnsavedChanges) [member function]
    def EventUnsavedChanges(self, bOutUnsavedChanges: bool) -> None: ...

    # void TrainingEditorWrapper::EventPlaytestStarted(TrainingEditorWrapper GamEvent) [member function]
    def EventPlaytestStarted(self, GamEvent: TrainingEditorWrapper) -> None: ...

    # void TrainingEditorWrapper::EventRoundChanged(TrainingEditorWrapper GamEvent) [member function]
    def EventRoundChanged(self, GamEvent: TrainingEditorWrapper) -> None: ...

    # void TrainingEditorWrapper::EventRoundTimeChanged(TrainingEditorWrapper GameEvent) [member function]
    def EventRoundTimeChanged(self, GameEvent: TrainingEditorWrapper) -> None: ...

    # Private:
    # TrainingEditorWrapper::Impl [class declaration]

    # TrainingEditorWrapper::pimpl [variable]
    @property
    def pimpl(self) -> Any: ...


