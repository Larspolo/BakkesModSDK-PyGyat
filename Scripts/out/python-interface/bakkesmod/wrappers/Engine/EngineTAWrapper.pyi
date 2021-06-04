from typing import Callable, List, Tuple, Dict, Any
from enum import Enum

class EngineTAWrapper():
    # Public:
    # EngineTAWrapper::EngineTAWrapper(uintptr_t mem) [constructor]
    def __init__(self, mem: int) -> None: ...

    # EngineTAWrapper::EngineTAWrapper(EngineTAWrapper const & other) [constructor]

    # EngineTAWrapper & EngineTAWrapper::operator=(EngineTAWrapper rhs) [member operator]

    # EngineTAWrapper::~EngineTAWrapper() [destructor]
    def __del__(self) -> None: ...

    # bool EngineTAWrapper::IsNull() const [member function]
    def IsNull(self) -> bool: ...

    # bool EngineTAWrapper::operator bool() const [casting operator]

    # long unsigned int EngineTAWrapper::GetbEnableClientPrediction() [member function]
    def GetbEnableClientPrediction(self) -> bool: ...

    # void EngineTAWrapper::SetbEnableClientPrediction(long unsigned int newbEnableClientPrediction) [member function]
    def SetbEnableClientPrediction(self, newbEnableClientPrediction: bool) -> None: ...

    # long unsigned int EngineTAWrapper::GetbClientPhysicsUpdate() [member function]
    def GetbClientPhysicsUpdate(self) -> bool: ...

    # void EngineTAWrapper::SetbClientPhysicsUpdate(long unsigned int newbClientPhysicsUpdate) [member function]
    def SetbClientPhysicsUpdate(self, newbClientPhysicsUpdate: bool) -> None: ...

    # long unsigned int EngineTAWrapper::GetbDisableClientCorrections() [member function]
    def GetbDisableClientCorrections(self) -> bool: ...

    # void EngineTAWrapper::SetbDisableClientCorrections(long unsigned int newbDisableClientCorrections) [member function]
    def SetbDisableClientCorrections(self, newbDisableClientCorrections: bool) -> None: ...

    # long unsigned int EngineTAWrapper::GetbDebugClientCorrections() [member function]
    def GetbDebugClientCorrections(self) -> bool: ...

    # void EngineTAWrapper::SetbDebugClientCorrections(long unsigned int newbDebugClientCorrections) [member function]
    def SetbDebugClientCorrections(self, newbDebugClientCorrections: bool) -> None: ...

    # long unsigned int EngineTAWrapper::GetbForceClientCorrection() [member function]
    def GetbForceClientCorrection(self) -> bool: ...

    # void EngineTAWrapper::SetbForceClientCorrection(long unsigned int newbForceClientCorrection) [member function]
    def SetbForceClientCorrection(self, newbForceClientCorrection: bool) -> None: ...

    # float EngineTAWrapper::GetPhysicsFramerate() [member function]
    def GetPhysicsFramerate(self) -> float: ...

    # void EngineTAWrapper::SetPhysicsFramerate(float newPhysicsFramerate) [member function]
    def SetPhysicsFramerate(self, newPhysicsFramerate: float) -> None: ...

    # int EngineTAWrapper::GetMaxPhysicsSubsteps() [member function]
    def GetMaxPhysicsSubsteps(self) -> int: ...

    # void EngineTAWrapper::SetMaxPhysicsSubsteps(int newMaxPhysicsSubsteps) [member function]
    def SetMaxPhysicsSubsteps(self, newMaxPhysicsSubsteps: int) -> None: ...

    # int EngineTAWrapper::GetMaxUploadedClientFrames() [member function]
    def GetMaxUploadedClientFrames(self) -> int: ...

    # void EngineTAWrapper::SetMaxUploadedClientFrames(int newMaxUploadedClientFrames) [member function]
    def SetMaxUploadedClientFrames(self, newMaxUploadedClientFrames: int) -> None: ...

    # int EngineTAWrapper::GetMaxClientReplayFrames() [member function]
    def GetMaxClientReplayFrames(self) -> int: ...

    # void EngineTAWrapper::SetMaxClientReplayFrames(int newMaxClientReplayFrames) [member function]
    def SetMaxClientReplayFrames(self, newMaxClientReplayFrames: int) -> None: ...

    # int EngineTAWrapper::GetPhysicsFrame() [member function]
    def GetPhysicsFrame(self) -> int: ...

    # void EngineTAWrapper::SetPhysicsFrame(int newPhysicsFrame) [member function]
    def SetPhysicsFrame(self, newPhysicsFrame: int) -> None: ...

    # float EngineTAWrapper::GetRenderAlpha() [member function]
    def GetRenderAlpha(self) -> float: ...

    # void EngineTAWrapper::SetRenderAlpha(float newRenderAlpha) [member function]
    def SetRenderAlpha(self, newRenderAlpha: float) -> None: ...

    # int EngineTAWrapper::GetReplicatedPhysicsFrame() [member function]
    def GetReplicatedPhysicsFrame(self) -> int: ...

    # void EngineTAWrapper::SetReplicatedPhysicsFrame(int newReplicatedPhysicsFrame) [member function]
    def SetReplicatedPhysicsFrame(self, newReplicatedPhysicsFrame: int) -> None: ...

    # int EngineTAWrapper::GetDirtyPhysicsFrame() [member function]
    def GetDirtyPhysicsFrame(self) -> int: ...

    # void EngineTAWrapper::SetDirtyPhysicsFrame(int newDirtyPhysicsFrame) [member function]
    def SetDirtyPhysicsFrame(self, newDirtyPhysicsFrame: int) -> None: ...

    # int EngineTAWrapper::GetForceCorrectionFrames() [member function]
    def GetForceCorrectionFrames(self) -> int: ...

    # void EngineTAWrapper::SetForceCorrectionFrames(int newForceCorrectionFrames) [member function]
    def SetForceCorrectionFrames(self, newForceCorrectionFrames: int) -> None: ...

    # int EngineTAWrapper::GetTickNotifyIndex() [member function]
    def GetTickNotifyIndex(self) -> int: ...

    # void EngineTAWrapper::SetTickNotifyIndex(int newTickNotifyIndex) [member function]
    def SetTickNotifyIndex(self, newTickNotifyIndex: int) -> None: ...

    # UnrealStringWrapper EngineTAWrapper::GetShellArchetypePath() [member function]
    def GetShellArchetypePath(self) -> UnrealStringWrapper: ...

    # float EngineTAWrapper::GetLastBugReportTime() [member function]
    def GetLastBugReportTime(self) -> float: ...

    # void EngineTAWrapper::SetLastBugReportTime(float newLastBugReportTime) [member function]
    def SetLastBugReportTime(self, newLastBugReportTime: float) -> None: ...

    # float EngineTAWrapper::GetDebugClientCorrectionStartTime() [member function]
    def GetDebugClientCorrectionStartTime(self) -> float: ...

    # void EngineTAWrapper::SetDebugClientCorrectionStartTime(float newDebugClientCorrectionStartTime) [member function]
    def SetDebugClientCorrectionStartTime(self, newDebugClientCorrectionStartTime: float) -> None: ...

    # int EngineTAWrapper::GetDebugClientCorrectionCount() [member function]
    def GetDebugClientCorrectionCount(self) -> int: ...

    # void EngineTAWrapper::SetDebugClientCorrectionCount(int newDebugClientCorrectionCount) [member function]
    def SetDebugClientCorrectionCount(self, newDebugClientCorrectionCount: int) -> None: ...

    # StatGraphSystemWrapper EngineTAWrapper::GetStatGraphs() [member function]
    def GetStatGraphs(self) -> StatGraphSystemWrapper: ...

    # void EngineTAWrapper::SetStatGraphs(StatGraphSystemWrapper newStatGraphs) [member function]
    def SetStatGraphs(self, newStatGraphs: StatGraphSystemWrapper) -> None: ...

    # float EngineTAWrapper::GetLastPhysicsDeltaTimeScale() [member function]
    def GetLastPhysicsDeltaTimeScale(self) -> float: ...

    # void EngineTAWrapper::SetLastPhysicsDeltaTimeScale(float newLastPhysicsDeltaTimeScale) [member function]
    def SetLastPhysicsDeltaTimeScale(self, newLastPhysicsDeltaTimeScale: float) -> None: ...

    # void EngineTAWrapper::DebugClientCorrections2() [member function]
    def DebugClientCorrections2(self) -> None: ...

    # float EngineTAWrapper::GetBulletFixedDeltaTime() [member function]
    def GetBulletFixedDeltaTime(self) -> float: ...

    # void EngineTAWrapper::RunPhysicsStep(int BulletSceneIndex, float DeltaTime) [member function]
    def RunPhysicsStep(self, BulletSceneIndex: int, DeltaTime: float) -> None: ...

    # void EngineTAWrapper::UpdateReplicatedPhysicsFrame(int ServerFrame) [member function]
    def UpdateReplicatedPhysicsFrame(self, ServerFrame: int) -> None: ...

    # void EngineTAWrapper::DebugDedicatedServer(float ForHowLong) [member function]
    def DebugDedicatedServer(self, ForHowLong: float) -> None: ...

    # float EngineTAWrapper::GetPhysicsTime() [member function]
    def GetPhysicsTime(self) -> float: ...

    # void EngineTAWrapper::eventRecordAppStart() [member function]
    def eventRecordAppStart(self) -> None: ...

    # void EngineTAWrapper::eventInit() [member function]
    def eventInit(self) -> None: ...

    # void EngineTAWrapper::EventPreAsyncTick(float DeltaTime) [member function]
    def EventPreAsyncTick(self, DeltaTime: float) -> None: ...

    # Private:
    # EngineTAWrapper::Impl [class declaration]

    # EngineTAWrapper::pimpl [variable]
    @property
    def pimpl(self) -> Any: ...


