from typing import Callable, List, Tuple, Dict, Any
from enum import Enum

class GameEditorWrapper():
    # Public:
    # GameEditorWrapper::GameEditorWrapper(uintptr_t mem) [constructor]
    def __init__(self, mem: int) -> None: ...

    # GameEditorWrapper::GameEditorWrapper(GameEditorWrapper const & other) [constructor]

    # GameEditorWrapper & GameEditorWrapper::operator=(GameEditorWrapper rhs) [member operator]

    # GameEditorWrapper::~GameEditorWrapper() [destructor]
    def __del__(self) -> None: ...

    # int GameEditorWrapper::GetActiveRoundNumber() [member function]
    def GetActiveRoundNumber(self) -> int: ...

    # void GameEditorWrapper::SetActiveRoundNumber(int newActiveRoundNumber) [member function]
    def SetActiveRoundNumber(self, newActiveRoundNumber: int) -> None: ...

    # int GameEditorWrapper::GetMaxRounds() [member function]
    def GetMaxRounds(self) -> int: ...

    # void GameEditorWrapper::SetMaxRounds(int newMaxRounds) [member function]
    def SetMaxRounds(self, newMaxRounds: int) -> None: ...

    # int GameEditorWrapper::GetHistoryPosition() [member function]
    def GetHistoryPosition(self) -> int: ...

    # void GameEditorWrapper::SetHistoryPosition(int newHistoryPosition) [member function]
    def SetHistoryPosition(self, newHistoryPosition: int) -> None: ...

    # int GameEditorWrapper::GetMaxUndoHistory() [member function]
    def GetMaxUndoHistory(self) -> int: ...

    # void GameEditorWrapper::SetMaxUndoHistory(int newMaxUndoHistory) [member function]
    def SetMaxUndoHistory(self, newMaxUndoHistory: int) -> None: ...

    # FXActorWrapper GameEditorWrapper::GetFXActorArchetype() [member function]
    def GetFXActorArchetype(self) -> FXActorWrapper: ...

    # void GameEditorWrapper::SetFXActorArchetype(FXActorWrapper newFXActorArchetype) [member function]
    def SetFXActorArchetype(self, newFXActorArchetype: FXActorWrapper) -> None: ...

    # FXActorWrapper GameEditorWrapper::GetFXActor() [member function]
    def GetFXActor(self) -> FXActorWrapper: ...

    # void GameEditorWrapper::SetFXActor(FXActorWrapper newFXActor) [member function]
    def SetFXActor(self, newFXActor: FXActorWrapper) -> None: ...

    # void GameEditorWrapper::RotateActor(PlayerControllerWrapper PC, long unsigned int bSnapOrientation) [member function]
    def RotateActor(self, PC: PlayerControllerWrapper, bSnapOrientation: bool) -> None: ...

    # void GameEditorWrapper::PrevRound() [member function]
    def PrevRound(self) -> None: ...

    # void GameEditorWrapper::NextRound() [member function]
    def NextRound(self) -> None: ...

    # void GameEditorWrapper::DecreaseTime() [member function]
    def DecreaseTime(self) -> None: ...

    # void GameEditorWrapper::IncreaseTime() [member function]
    def IncreaseTime(self) -> None: ...

    # void GameEditorWrapper::StopEditing(PlayerControllerWrapper PC) [member function]
    def StopEditing(self, PC: PlayerControllerWrapper) -> None: ...

    # void GameEditorWrapper::StartEditing() [member function]
    def StartEditing(self) -> None: ...

    # void GameEditorWrapper::CycleActor(PlayerControllerWrapper PC) [member function]
    def CycleActor(self, PC: PlayerControllerWrapper) -> None: ...

    # void GameEditorWrapper::ReleaseGrabbedActor(PlayerControllerWrapper PC) [member function]
    def ReleaseGrabbedActor(self, PC: PlayerControllerWrapper) -> None: ...

    # void GameEditorWrapper::ReleaseRotateActor(PlayerControllerWrapper PC) [member function]
    def ReleaseRotateActor(self, PC: PlayerControllerWrapper) -> None: ...

    # void GameEditorWrapper::ToggleRotateActor(PlayerControllerWrapper PC) [member function]
    def ToggleRotateActor(self, PC: PlayerControllerWrapper) -> None: ...

    # void GameEditorWrapper::ToggleGrabActor(PlayerControllerWrapper PC) [member function]
    def ToggleGrabActor(self, PC: PlayerControllerWrapper) -> None: ...

    # void GameEditorWrapper::ToggleReleaseActor(PlayerControllerWrapper PC) [member function]
    def ToggleReleaseActor(self, PC: PlayerControllerWrapper) -> None: ...

    # void GameEditorWrapper::ReleaseActor2(PlayerControllerWrapper PC) [member function]
    def ReleaseActor2(self, PC: PlayerControllerWrapper) -> None: ...

    # void GameEditorWrapper::GrabActor2(PlayerControllerWrapper PC) [member function]
    def GrabActor2(self, PC: PlayerControllerWrapper) -> None: ...

    # bool GameEditorWrapper::CanQueSaveReplay() [member function]
    def CanQueSaveReplay(self) -> bool: ...

    # bool GameEditorWrapper::ShouldUpdateCrosshair() [member function]
    def ShouldUpdateCrosshair(self) -> bool: ...

    # int GameEditorWrapper::GetPlayerTeamNumber() [member function]
    def GetPlayerTeamNumber(self) -> int: ...

    # bool GameEditorWrapper::CanAddHistory() [member function]
    def CanAddHistory(self) -> bool: ...

    # void GameEditorWrapper::ToggleEditorRound() [member function]
    def ToggleEditorRound(self) -> None: ...

    # void GameEditorWrapper::CommitRedoRound() [member function]
    def CommitRedoRound(self) -> None: ...

    # void GameEditorWrapper::ResetRound() [member function]
    def ResetRound(self) -> None: ...

    # void GameEditorWrapper::Save2() [member function]
    def Save2(self) -> None: ...

    # void GameEditorWrapper::Redo2(PlayerControllerWrapper PC) [member function]
    def Redo2(self, PC: PlayerControllerWrapper) -> None: ...

    # void GameEditorWrapper::Undo2(PlayerControllerWrapper PC) [member function]
    def Undo2(self, PC: PlayerControllerWrapper) -> None: ...

    # unsigned char GameEditorWrapper::GetOtherHistoryType(unsigned char HistoryType) [member function]
    def GetOtherHistoryType(self, HistoryType: int) -> int: ...

    # void GameEditorWrapper::ClampUndoHistory() [member function]
    def ClampUndoHistory(self) -> None: ...

    # void GameEditorWrapper::ClearRedoHistory() [member function]
    def ClearRedoHistory(self) -> None: ...

    # void GameEditorWrapper::ClearAllHistory() [member function]
    def ClearAllHistory(self) -> None: ...

    # bool GameEditorWrapper::DestroyActor(ActorWrapper A, unsigned char HistoryType) [member function]
    def DestroyActor(self, A: ActorWrapper, HistoryType: int) -> bool: ...

    # bool GameEditorWrapper::IsInEditorMode() [member function]
    def IsInEditorMode(self) -> bool: ...

    # void GameEditorWrapper::RemoveAllPointsFromScore(int TeamIndex) [member function]
    def RemoveAllPointsFromScore(self, TeamIndex: int) -> None: ...

    # void GameEditorWrapper::RemovePointsFromScore(int PointsToRemove, int TeamIndex) [member function]
    def RemovePointsFromScore(self, PointsToRemove: int, TeamIndex: int) -> None: ...

    # void GameEditorWrapper::DeleteAllExistingActorsBasedOffSpawnList() [member function]
    def DeleteAllExistingActorsBasedOffSpawnList(self) -> None: ...

    # bool GameEditorWrapper::RoundContainsASwitch() [member function]
    def RoundContainsASwitch(self) -> bool: ...

    # void GameEditorWrapper::EnableTriggers(long unsigned int bEnable) [member function]
    def EnableTriggers(self, bEnable: bool) -> None: ...

    # void GameEditorWrapper::HideCarSpawnPoints(long unsigned int bHide) [member function]
    def HideCarSpawnPoints(self, bHide: bool) -> None: ...

    # void GameEditorWrapper::ResetSpawnLocations() [member function]
    def ResetSpawnLocations(self) -> None: ...

    # void GameEditorWrapper::OnSpawnedArchetype(ActorWrapper SpawnedActor, unsigned char HistoryType) [member function]
    def OnSpawnedArchetype(self, SpawnedActor: ActorWrapper, HistoryType: int) -> None: ...

    # void GameEditorWrapper::SpawnArchetype(PlayerControllerWrapper Controller, int ArchetypeIndex) [member function]
    def SpawnArchetype(self, Controller: PlayerControllerWrapper, ArchetypeIndex: int) -> None: ...

    # void GameEditorWrapper::IncrementSelectedSpawnArchetypeIndex(int Direction, int * Index) [member function]
    def IncrementSelectedSpawnArchetypeIndex(self, Direction: int, Index: int) -> None: ...

    # bool GameEditorWrapper::CanChangeTeam() [member function]
    def CanChangeTeam(self) -> bool: ...

    # void GameEditorWrapper::ResetBallsToDefaultPosition() [member function]
    def ResetBallsToDefaultPosition(self) -> None: ...

    # void GameEditorWrapper::FireBalls() [member function]
    def FireBalls(self) -> None: ...

    # void GameEditorWrapper::Interact() [member function]
    def Interact(self) -> None: ...

    # bool GameEditorWrapper::ShouldResetBalls() [member function]
    def ShouldResetBalls(self) -> bool: ...

    # void GameEditorWrapper::OnVehicleSetup(CarWrapper Car) [member function]
    def OnVehicleSetup(self, Car: CarWrapper) -> None: ...

    # void GameEditorWrapper::HandleVehicleSetup(CarWrapper Car) [member function]
    def HandleVehicleSetup(self, Car: CarWrapper) -> None: ...

    # void GameEditorWrapper::OnPlayerRestarted(CarWrapper PlayerCar) [member function]
    def OnPlayerRestarted(self, PlayerCar: CarWrapper) -> None: ...

    # bool GameEditorWrapper::ChooseTeam(int TeamIndex, PlayerControllerWrapper Player) [member function]
    def ChooseTeam(self, TeamIndex: int, Player: PlayerControllerWrapper) -> bool: ...

    # void GameEditorWrapper::InitFX() [member function]
    def InitFX(self) -> None: ...

    # void GameEditorWrapper::eventPostBeginPlay() [member function]
    def eventPostBeginPlay(self) -> None: ...

    # Private:
    # GameEditorWrapper::Impl [class declaration]

    # GameEditorWrapper::pimpl [variable]
    @property
    def pimpl(self) -> Any: ...


