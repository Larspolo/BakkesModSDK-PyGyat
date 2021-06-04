from typing import Callable, List, Tuple, Dict, Any
from enum import Enum

class GoalWrapper():
    # Public:
    # GoalWrapper::GoalWrapper(uintptr_t mem) [constructor]
    def __init__(self, mem: int) -> None: ...

    # GoalWrapper::GoalWrapper(GoalWrapper const & other) [constructor]

    # GoalWrapper & GoalWrapper::operator=(GoalWrapper rhs) [member operator]

    # GoalWrapper::~GoalWrapper() [destructor]
    def __del__(self) -> None: ...

    # bool GoalWrapper::IsNull() const [member function]
    def IsNull(self) -> bool: ...

    # bool GoalWrapper::operator bool() const [casting operator]

    # ActorWrapper GoalWrapper::GetGoalOrientation() [member function]
    def GetGoalOrientation(self) -> ActorWrapper: ...

    # void GoalWrapper::SetGoalOrientation(ActorWrapper newGoalOrientation) [member function]
    def SetGoalOrientation(self, newGoalOrientation: ActorWrapper) -> None: ...

    # ArrayWrapper<ActorWrapper> GoalWrapper::GetOverrideGoalIndicatorOrientations() [member function]
    def GetOverrideGoalIndicatorOrientations(self) -> ArrayWrapper_ActorWrapper: ...

    # unsigned char GoalWrapper::GetTeamNum() [member function]
    def GetTeamNum(self) -> int: ...

    # void GoalWrapper::SetTeamNum(unsigned char newTeamNum) [member function]
    def SetTeamNum(self, newTeamNum: int) -> None: ...

    # FXActorWrapper GoalWrapper::GetScoreFX() [member function]
    def GetScoreFX(self) -> FXActorWrapper: ...

    # void GoalWrapper::SetScoreFX(FXActorWrapper newScoreFX) [member function]
    def SetScoreFX(self, newScoreFX: FXActorWrapper) -> None: ...

    # UnrealStringWrapper GoalWrapper::GetGoalIndicatorArchetype() [member function]
    def GetGoalIndicatorArchetype(self) -> UnrealStringWrapper: ...

    # long unsigned int GoalWrapper::GetbNoGoalIndicator() [member function]
    def GetbNoGoalIndicator(self) -> bool: ...

    # void GoalWrapper::SetbNoGoalIndicator(long unsigned int newbNoGoalIndicator) [member function]
    def SetbNoGoalIndicator(self, newbNoGoalIndicator: bool) -> None: ...

    # long unsigned int GoalWrapper::GetbOnlyGoalsFromDirection() [member function]
    def GetbOnlyGoalsFromDirection(self) -> bool: ...

    # void GoalWrapper::SetbOnlyGoalsFromDirection(long unsigned int newbOnlyGoalsFromDirection) [member function]
    def SetbOnlyGoalsFromDirection(self, newbOnlyGoalsFromDirection: bool) -> None: ...

    # long unsigned int GoalWrapper::GetbShowFocusExtent() [member function]
    def GetbShowFocusExtent(self) -> bool: ...

    # void GoalWrapper::SetbShowFocusExtent(long unsigned int newbShowFocusExtent) [member function]
    def SetbShowFocusExtent(self, newbShowFocusExtent: bool) -> None: ...

    # ActorWrapper GoalWrapper::GetGoalDirection() [member function]
    def GetGoalDirection(self) -> ActorWrapper: ...

    # void GoalWrapper::SetGoalDirection(ActorWrapper newGoalDirection) [member function]
    def SetGoalDirection(self, newGoalDirection: ActorWrapper) -> None: ...

    # int GoalWrapper::GetPointsToAward() [member function]
    def GetPointsToAward(self) -> int: ...

    # void GoalWrapper::SetPointsToAward(int newPointsToAward) [member function]
    def SetPointsToAward(self, newPointsToAward: int) -> None: ...

    # Vector GoalWrapper::GetAutoCamFocusExtent() [member function]
    def GetAutoCamFocusExtent(self) -> Vector: ...

    # void GoalWrapper::SetAutoCamFocusExtent(Vector newAutoCamFocusExtent) [member function]
    def SetAutoCamFocusExtent(self, newAutoCamFocusExtent: Vector) -> None: ...

    # Vector GoalWrapper::GetGoalFocusLocationOffset() [member function]
    def GetGoalFocusLocationOffset(self) -> Vector: ...

    # void GoalWrapper::SetGoalFocusLocationOffset(Vector newGoalFocusLocationOffset) [member function]
    def SetGoalFocusLocationOffset(self, newGoalFocusLocationOffset: Vector) -> None: ...

    # float GoalWrapper::GetMaxGoalScorerAttachRadius() [member function]
    def GetMaxGoalScorerAttachRadius(self) -> float: ...

    # void GoalWrapper::SetMaxGoalScorerAttachRadius(float newMaxGoalScorerAttachRadius) [member function]
    def SetMaxGoalScorerAttachRadius(self, newMaxGoalScorerAttachRadius: float) -> None: ...

    # Vector GoalWrapper::GetGoalScoredDotDirection() [member function]
    def GetGoalScoredDotDirection(self) -> Vector: ...

    # void GoalWrapper::SetGoalScoredDotDirection(Vector newGoalScoredDotDirection) [member function]
    def SetGoalScoredDotDirection(self, newGoalScoredDotDirection: Vector) -> None: ...

    # float GoalWrapper::GetMinAttachGoalToScorerDot() [member function]
    def GetMinAttachGoalToScorerDot(self) -> float: ...

    # void GoalWrapper::SetMinAttachGoalToScorerDot(float newMinAttachGoalToScorerDot) [member function]
    def SetMinAttachGoalToScorerDot(self, newMinAttachGoalToScorerDot: float) -> None: ...

    # Vector GoalWrapper::GetLocation() [member function]
    def GetLocation(self) -> Vector: ...

    # void GoalWrapper::SetLocation(Vector newLocation) [member function]
    def SetLocation(self, newLocation: Vector) -> None: ...

    # Vector GoalWrapper::GetDirection() [member function]
    def GetDirection(self) -> Vector: ...

    # void GoalWrapper::SetDirection(Vector newDirection) [member function]
    def SetDirection(self, newDirection: Vector) -> None: ...

    # Vector GoalWrapper::GetRight() [member function]
    def GetRight(self) -> Vector: ...

    # void GoalWrapper::SetRight(Vector newRight) [member function]
    def SetRight(self, newRight: Vector) -> None: ...

    # Vector GoalWrapper::GetUp() [member function]
    def GetUp(self) -> Vector: ...

    # void GoalWrapper::SetUp(Vector newUp) [member function]
    def SetUp(self, newUp: Vector) -> None: ...

    # Rotator GoalWrapper::GetRotation() [member function]
    def GetRotation(self) -> Rotator: ...

    # void GoalWrapper::SetRotation(Rotator newRotation) [member function]
    def SetRotation(self, newRotation: Rotator) -> None: ...

    # Vector GoalWrapper::GetLocalExtent() [member function]
    def GetLocalExtent(self) -> Vector: ...

    # void GoalWrapper::SetLocalExtent(Vector newLocalExtent) [member function]
    def SetLocalExtent(self, newLocalExtent: Vector) -> None: ...

    # Vector GoalWrapper::GetWorldCenter() [member function]
    def GetWorldCenter(self) -> Vector: ...

    # void GoalWrapper::SetWorldCenter(Vector newWorldCenter) [member function]
    def SetWorldCenter(self, newWorldCenter: Vector) -> None: ...

    # Vector GoalWrapper::GetWorldExtent() [member function]
    def GetWorldExtent(self) -> Vector: ...

    # void GoalWrapper::SetWorldExtent(Vector newWorldExtent) [member function]
    def SetWorldExtent(self, newWorldExtent: Vector) -> None: ...

    # Vector GoalWrapper::GetWorldFrontCenter() [member function]
    def GetWorldFrontCenter(self) -> Vector: ...

    # void GoalWrapper::SetWorldFrontCenter(Vector newWorldFrontCenter) [member function]
    def SetWorldFrontCenter(self, newWorldFrontCenter: Vector) -> None: ...

    # Vector GoalWrapper::GetGoalFocusExtentCenter() [member function]
    def GetGoalFocusExtentCenter(self) -> Vector: ...

    # void GoalWrapper::Init() [member function]
    def Init(self) -> None: ...

    # void GoalWrapper::eventBeginPlay() [member function]
    def eventBeginPlay(self) -> None: ...

    # Private:
    # GoalWrapper::Impl [class declaration]

    # GoalWrapper::pimpl [variable]
    @property
    def pimpl(self) -> Any: ...


