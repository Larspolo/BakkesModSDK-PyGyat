from typing import Callable, List, Tuple, Dict, Any
from enum import Enum

class PriWrapper():
    # Public:
    # PriWrapper::PriWrapper(uintptr_t mem) [constructor]
    def __init__(self, mem: int) -> None: ...

    # PriWrapper::PriWrapper(PriWrapper const & other) [constructor]

    # PriWrapper & PriWrapper::operator=(PriWrapper rhs) [member operator]

    # PriWrapper::~PriWrapper() [destructor]
    def __del__(self) -> None: ...

    # int PriWrapper::GetMatchScore() [member function]
    def GetMatchScore(self) -> int: ...

    # void PriWrapper::SetMatchScore(int newMatchScore) [member function]
    def SetMatchScore(self, newMatchScore: int) -> None: ...

    # int PriWrapper::GetMatchGoals() [member function]
    def GetMatchGoals(self) -> int: ...

    # void PriWrapper::SetMatchGoals(int newMatchGoals) [member function]
    def SetMatchGoals(self, newMatchGoals: int) -> None: ...

    # int PriWrapper::GetMatchOwnGoals() [member function]
    def GetMatchOwnGoals(self) -> int: ...

    # void PriWrapper::SetMatchOwnGoals(int newMatchOwnGoals) [member function]
    def SetMatchOwnGoals(self, newMatchOwnGoals: int) -> None: ...

    # int PriWrapper::GetMatchAssists() [member function]
    def GetMatchAssists(self) -> int: ...

    # void PriWrapper::SetMatchAssists(int newMatchAssists) [member function]
    def SetMatchAssists(self, newMatchAssists: int) -> None: ...

    # int PriWrapper::GetMatchSaves() [member function]
    def GetMatchSaves(self) -> int: ...

    # void PriWrapper::SetMatchSaves(int newMatchSaves) [member function]
    def SetMatchSaves(self, newMatchSaves: int) -> None: ...

    # int PriWrapper::GetMatchShots() [member function]
    def GetMatchShots(self) -> int: ...

    # void PriWrapper::SetMatchShots(int newMatchShots) [member function]
    def SetMatchShots(self, newMatchShots: int) -> None: ...

    # int PriWrapper::GetMatchDemolishes() [member function]
    def GetMatchDemolishes(self) -> int: ...

    # void PriWrapper::SetMatchDemolishes(int newMatchDemolishes) [member function]
    def SetMatchDemolishes(self, newMatchDemolishes: int) -> None: ...

    # int PriWrapper::GetMatchBonusXP() [member function]
    def GetMatchBonusXP(self) -> int: ...

    # void PriWrapper::SetMatchBonusXP(int newMatchBonusXP) [member function]
    def SetMatchBonusXP(self, newMatchBonusXP: int) -> None: ...

    # int PriWrapper::GetMatchBreakoutDamage() [member function]
    def GetMatchBreakoutDamage(self) -> int: ...

    # void PriWrapper::SetMatchBreakoutDamage(int newMatchBreakoutDamage) [member function]
    def SetMatchBreakoutDamage(self, newMatchBreakoutDamage: int) -> None: ...

    # long unsigned int PriWrapper::GetbMatchMVP() [member function]
    def GetbMatchMVP(self) -> bool: ...

    # void PriWrapper::SetbMatchMVP(long unsigned int newbMatchMVP) [member function]
    def SetbMatchMVP(self, newbMatchMVP: bool) -> None: ...

    # long unsigned int PriWrapper::GetbMatchAdmin() [member function]
    def GetbMatchAdmin(self) -> bool: ...

    # void PriWrapper::SetbMatchAdmin(long unsigned int newbMatchAdmin) [member function]
    def SetbMatchAdmin(self, newbMatchAdmin: bool) -> None: ...

    # long unsigned int PriWrapper::GetbLoadoutSet() [member function]
    def GetbLoadoutSet(self) -> bool: ...

    # void PriWrapper::SetbLoadoutSet(long unsigned int newbLoadoutSet) [member function]
    def SetbLoadoutSet(self, newbLoadoutSet: bool) -> None: ...

    # long unsigned int PriWrapper::GetbOnlineLoadoutSet() [member function]
    def GetbOnlineLoadoutSet(self) -> bool: ...

    # void PriWrapper::SetbOnlineLoadoutSet(long unsigned int newbOnlineLoadoutSet) [member function]
    def SetbOnlineLoadoutSet(self, newbOnlineLoadoutSet: bool) -> None: ...

    # long unsigned int PriWrapper::GetbLoadoutsSet() [member function]
    def GetbLoadoutsSet(self) -> bool: ...

    # void PriWrapper::SetbLoadoutsSet(long unsigned int newbLoadoutsSet) [member function]
    def SetbLoadoutsSet(self, newbLoadoutsSet: bool) -> None: ...

    # long unsigned int PriWrapper::GetbOnlineLoadoutsSet() [member function]
    def GetbOnlineLoadoutsSet(self) -> bool: ...

    # void PriWrapper::SetbOnlineLoadoutsSet(long unsigned int newbOnlineLoadoutsSet) [member function]
    def SetbOnlineLoadoutsSet(self, newbOnlineLoadoutsSet: bool) -> None: ...

    # long unsigned int PriWrapper::GetbTeamPaintSet() [member function]
    def GetbTeamPaintSet(self) -> bool: ...

    # void PriWrapper::SetbTeamPaintSet(long unsigned int newbTeamPaintSet) [member function]
    def SetbTeamPaintSet(self, newbTeamPaintSet: bool) -> None: ...

    # long unsigned int PriWrapper::GetbReady() [member function]
    def GetbReady(self) -> bool: ...

    # void PriWrapper::SetbReady(long unsigned int newbReady) [member function]
    def SetbReady(self, newbReady: bool) -> None: ...

    # long unsigned int PriWrapper::GetbBusy() [member function]
    def GetbBusy(self) -> bool: ...

    # void PriWrapper::SetbBusy(long unsigned int newbBusy) [member function]
    def SetbBusy(self, newbBusy: bool) -> None: ...

    # long unsigned int PriWrapper::GetbUsingSecondaryCamera() [member function]
    def GetbUsingSecondaryCamera(self) -> bool: ...

    # void PriWrapper::SetbUsingSecondaryCamera(long unsigned int newbUsingSecondaryCamera) [member function]
    def SetbUsingSecondaryCamera(self, newbUsingSecondaryCamera: bool) -> None: ...

    # long unsigned int PriWrapper::GetbUsingBehindView() [member function]
    def GetbUsingBehindView(self) -> bool: ...

    # void PriWrapper::SetbUsingBehindView(long unsigned int newbUsingBehindView) [member function]
    def SetbUsingBehindView(self, newbUsingBehindView: bool) -> None: ...

    # long unsigned int PriWrapper::GetbUsingFreecam() [member function]
    def GetbUsingFreecam(self) -> bool: ...

    # void PriWrapper::SetbUsingFreecam(long unsigned int newbUsingFreecam) [member function]
    def SetbUsingFreecam(self, newbUsingFreecam: bool) -> None: ...

    # long unsigned int PriWrapper::GetbIsInSplitScreen() [member function]
    def GetbIsInSplitScreen(self) -> bool: ...

    # void PriWrapper::SetbIsInSplitScreen(long unsigned int newbIsInSplitScreen) [member function]
    def SetbIsInSplitScreen(self, newbIsInSplitScreen: bool) -> None: ...

    # long unsigned int PriWrapper::GetbDeveloper() [member function]
    def GetbDeveloper(self) -> bool: ...

    # void PriWrapper::SetbDeveloper(long unsigned int newbDeveloper) [member function]
    def SetbDeveloper(self, newbDeveloper: bool) -> None: ...

    # long unsigned int PriWrapper::GetbStartVoteToForfeitDisabled() [member function]
    def GetbStartVoteToForfeitDisabled(self) -> bool: ...

    # void PriWrapper::SetbStartVoteToForfeitDisabled(long unsigned int newbStartVoteToForfeitDisabled) [member function]
    def SetbStartVoteToForfeitDisabled(self, newbStartVoteToForfeitDisabled: bool) -> None: ...

    # long unsigned int PriWrapper::GetbUsingItems() [member function]
    def GetbUsingItems(self) -> bool: ...

    # void PriWrapper::SetbUsingItems(long unsigned int newbUsingItems) [member function]
    def SetbUsingItems(self, newbUsingItems: bool) -> None: ...

    # long unsigned int PriWrapper::GetPlayerHistoryValid() [member function]
    def GetPlayerHistoryValid(self) -> bool: ...

    # void PriWrapper::SetPlayerHistoryValid(long unsigned int newPlayerHistoryValid) [member function]
    def SetPlayerHistoryValid(self, newPlayerHistoryValid: bool) -> None: ...

    # long unsigned int PriWrapper::GetbPlayedWithGamepad() [member function]
    def GetbPlayedWithGamepad(self) -> bool: ...

    # void PriWrapper::SetbPlayedWithGamepad(long unsigned int newbPlayedWithGamepad) [member function]
    def SetbPlayedWithGamepad(self, newbPlayedWithGamepad: bool) -> None: ...

    # GameEventWrapper PriWrapper::GetGameEvent() [member function]
    def GetGameEvent(self) -> GameEventWrapper: ...

    # void PriWrapper::SetGameEvent(GameEventWrapper newGameEvent) [member function]
    def SetGameEvent(self, newGameEvent: GameEventWrapper) -> None: ...

    # GameEventWrapper PriWrapper::GetReplicatedGameEvent() [member function]
    def GetReplicatedGameEvent(self) -> GameEventWrapper: ...

    # void PriWrapper::SetReplicatedGameEvent(GameEventWrapper newReplicatedGameEvent) [member function]
    def SetReplicatedGameEvent(self, newReplicatedGameEvent: GameEventWrapper) -> None: ...

    # CarWrapper PriWrapper::GetCar() [member function]
    def GetCar(self) -> CarWrapper: ...

    # void PriWrapper::SetCar(CarWrapper newCar) [member function]
    def SetCar(self, newCar: CarWrapper) -> None: ...

    # int PriWrapper::GetRespawnTimeRemaining() [member function]
    def GetRespawnTimeRemaining(self) -> int: ...

    # void PriWrapper::SetRespawnTimeRemaining(int newRespawnTimeRemaining) [member function]
    def SetRespawnTimeRemaining(self, newRespawnTimeRemaining: int) -> None: ...

    # int PriWrapper::GetWaitingStartTime() [member function]
    def GetWaitingStartTime(self) -> int: ...

    # void PriWrapper::SetWaitingStartTime(int newWaitingStartTime) [member function]
    def SetWaitingStartTime(self, newWaitingStartTime: int) -> None: ...

    # float PriWrapper::GetTotalGameTimePlayed() [member function]
    def GetTotalGameTimePlayed(self) -> float: ...

    # void PriWrapper::SetTotalGameTimePlayed(float newTotalGameTimePlayed) [member function]
    def SetTotalGameTimePlayed(self, newTotalGameTimePlayed: float) -> None: ...

    # ProfileCameraSettings PriWrapper::GetCameraSettings() [member function]
    def GetCameraSettings(self) -> ProfileCameraSettings: ...

    # void PriWrapper::SetCameraSettings(ProfileCameraSettings newCameraSettings) [member function]
    def SetCameraSettings(self, newCameraSettings: ProfileCameraSettings) -> None: ...

    # unsigned char PriWrapper::GetCameraPitch() [member function]
    def GetCameraPitch(self) -> int: ...

    # void PriWrapper::SetCameraPitch(unsigned char newCameraPitch) [member function]
    def SetCameraPitch(self, newCameraPitch: int) -> None: ...

    # unsigned char PriWrapper::GetCameraYaw() [member function]
    def GetCameraYaw(self) -> int: ...

    # void PriWrapper::SetCameraYaw(unsigned char newCameraYaw) [member function]
    def SetCameraYaw(self, newCameraYaw: int) -> None: ...

    # unsigned char PriWrapper::GetPawnType() [member function]
    def GetPawnType(self) -> int: ...

    # void PriWrapper::SetPawnType(unsigned char newPawnType) [member function]
    def SetPawnType(self, newPawnType: int) -> None: ...

    # unsigned char PriWrapper::GetReplicatedWorstNetQualityBeyondLatency() [member function]
    def GetReplicatedWorstNetQualityBeyondLatency(self) -> int: ...

    # void PriWrapper::SetReplicatedWorstNetQualityBeyondLatency(unsigned char newReplicatedWorstNetQualityBeyondLatency) [member function]
    def SetReplicatedWorstNetQualityBeyondLatency(self, newReplicatedWorstNetQualityBeyondLatency: int) -> None: ...

    # SteamID PriWrapper::GetPartyLeader() [member function]
    def GetPartyLeader(self) -> SteamID: ...

    # void PriWrapper::SetPartyLeader(SteamID newPartyLeader) [member function]
    def SetPartyLeader(self, newPartyLeader: SteamID) -> None: ...

    # UniqueIDWrapper PriWrapper::GetPartyLeaderID() [member function]
    def GetPartyLeaderID(self) -> UniqueIDWrapper: ...

    # void PriWrapper::SetPartyLeader(UniqueIDWrapper newPartyLeader) [member function]
    def SetPartyLeader(self, newPartyLeader: UniqueIDWrapper) -> None: ...

    # int PriWrapper::GetTotalXP() [member function]
    def GetTotalXP(self) -> int: ...

    # void PriWrapper::SetTotalXP(int newTotalXP) [member function]
    def SetTotalXP(self, newTotalXP: int) -> None: ...

    # int PriWrapper::GetXpLevel() [member function]
    def GetXpLevel(self) -> int: ...

    # void PriWrapper::SetXpLevel(int newXpLevel) [member function]
    def SetXpLevel(self, newXpLevel: int) -> None: ...

    # float PriWrapper::GetDodgeInputThreshold() [member function]
    def GetDodgeInputThreshold(self) -> float: ...

    # void PriWrapper::SetDodgeInputThreshold(float newDodgeInputThreshold) [member function]
    def SetDodgeInputThreshold(self, newDodgeInputThreshold: float) -> None: ...

    # float PriWrapper::GetSteeringSensitivity() [member function]
    def GetSteeringSensitivity(self) -> float: ...

    # void PriWrapper::SetSteeringSensitivity(float newSteeringSensitivity) [member function]
    def SetSteeringSensitivity(self, newSteeringSensitivity: float) -> None: ...

    # float PriWrapper::GetAirControlSensitivity() [member function]
    def GetAirControlSensitivity(self) -> float: ...

    # void PriWrapper::SetAirControlSensitivity(float newAirControlSensitivity) [member function]
    def SetAirControlSensitivity(self, newAirControlSensitivity: float) -> None: ...

    # float PriWrapper::GetNextTimeRestrictedStatEventAllowedTime() [member function]
    def GetNextTimeRestrictedStatEventAllowedTime(self) -> float: ...

    # void PriWrapper::SetNextTimeRestrictedStatEventAllowedTime(float newNextTimeRestrictedStatEventAllowedTime) [member function]
    def SetNextTimeRestrictedStatEventAllowedTime(self, newNextTimeRestrictedStatEventAllowedTime: float) -> None: ...

    # float PriWrapper::GetLastTimeRestrictedStatEventTime() [member function]
    def GetLastTimeRestrictedStatEventTime(self) -> float: ...

    # void PriWrapper::SetLastTimeRestrictedStatEventTime(float newLastTimeRestrictedStatEventTime) [member function]
    def SetLastTimeRestrictedStatEventTime(self, newLastTimeRestrictedStatEventTime: float) -> None: ...

    # int PriWrapper::GetTimeTillItem() [member function]
    def GetTimeTillItem(self) -> int: ...

    # void PriWrapper::SetTimeTillItem(int newTimeTillItem) [member function]
    def SetTimeTillItem(self, newTimeTillItem: int) -> None: ...

    # int PriWrapper::GetMaxTimeTillItem() [member function]
    def GetMaxTimeTillItem(self) -> int: ...

    # void PriWrapper::SetMaxTimeTillItem(int newMaxTimeTillItem) [member function]
    def SetMaxTimeTillItem(self, newMaxTimeTillItem: int) -> None: ...

    # int PriWrapper::GetBoostPickups() [member function]
    def GetBoostPickups(self) -> int: ...

    # void PriWrapper::SetBoostPickups(int newBoostPickups) [member function]
    def SetBoostPickups(self, newBoostPickups: int) -> None: ...

    # int PriWrapper::GetBallTouches() [member function]
    def GetBallTouches(self) -> int: ...

    # void PriWrapper::SetBallTouches(int newBallTouches) [member function]
    def SetBallTouches(self, newBallTouches: int) -> None: ...

    # int PriWrapper::GetCarTouches() [member function]
    def GetCarTouches(self) -> int: ...

    # void PriWrapper::SetCarTouches(int newCarTouches) [member function]
    def SetCarTouches(self, newCarTouches: int) -> None: ...

    # PriWrapper PriWrapper::GetReplacingBotPRI() [member function]
    def GetReplacingBotPRI(self) -> PriWrapper: ...

    # void PriWrapper::SetReplacingBotPRI(PriWrapper newReplacingBotPRI) [member function]
    def SetReplacingBotPRI(self, newReplacingBotPRI: PriWrapper) -> None: ...

    # long long unsigned int PriWrapper::GetClubID() [member function]
    def GetClubID(self) -> int: ...

    # void PriWrapper::SetClubID(long long unsigned int newClubID) [member function]
    def SetClubID(self, newClubID: int) -> None: ...

    # UnrealStringWrapper PriWrapper::GetPublicIP() [member function]
    def GetPublicIP(self) -> UnrealStringWrapper: ...

    # int PriWrapper::GetSpectatorShortcut() [member function]
    def GetSpectatorShortcut(self) -> int: ...

    # void PriWrapper::SetSpectatorShortcut(int newSpectatorShortcut) [member function]
    def SetSpectatorShortcut(self, newSpectatorShortcut: int) -> None: ...

    # ClubDetailsWrapper PriWrapper::GetClubDetails() [member function]
    def GetClubDetails(self) -> ClubDetailsWrapper: ...

    # void PriWrapper::__ClubID__ChangeNotifyFunc() [member function]
    def __ClubID__ChangeNotifyFunc(self) -> None: ...

    # void PriWrapper::__PREI__ChangeNotifyFunc() [member function]
    def __PREI__ChangeNotifyFunc(self) -> None: ...

    # void PriWrapper::__ReplicatedWorstNetQualityBeyondLatency__ChangeNotifyFunc() [member function]
    def __ReplicatedWorstNetQualityBeyondLatency__ChangeNotifyFunc(self) -> None: ...

    # void PriWrapper::eventDestroyed() [member function]
    def eventDestroyed(self) -> None: ...

    # void PriWrapper::OnSpectatorShortcutChanged() [member function]
    def OnSpectatorShortcutChanged(self) -> None: ...

    # void PriWrapper::SetSpectatorShortcut2(int InShortcut) [member function]
    def SetSpectatorShortcut2(self, InShortcut: int) -> None: ...

    # void PriWrapper::ServerSetPublicIP(std::string IP) [member function]
    def ServerSetPublicIP(self, IP: str) -> None: ...

    # void PriWrapper::OnUniqueIdChanged() [member function]
    def OnUniqueIdChanged(self) -> None: ...

    # void PriWrapper::UpdatePlayerAvatarBorder() [member function]
    def UpdatePlayerAvatarBorder(self) -> None: ...

    # void PriWrapper::UpdatePlayerBanner() [member function]
    def UpdatePlayerBanner(self) -> None: ...

    # void PriWrapper::ClientAchievementProgression(int AchievementId, unsigned char AchievementType, float Progress, float MaxProgress) [member function]
    def ClientAchievementProgression(self, AchievementId: int, AchievementType: int, Progress: float, MaxProgress: float) -> None: ...

    # void PriWrapper::ClientUnlockAchievement(int AchievementId, unsigned char AchievementType) [member function]
    def ClientUnlockAchievement(self, AchievementId: int, AchievementType: int) -> None: ...

    # void PriWrapper::ServerSetPlayerActivatedFX(FXActorWrapper FX) [member function]
    def ServerSetPlayerActivatedFX(self, FX: FXActorWrapper) -> None: ...

    # void PriWrapper::UpdateCarLocalPlayer() [member function]
    def UpdateCarLocalPlayer(self) -> None: ...

    # void PriWrapper::OnReplacingBotPRIChanged() [member function]
    def OnReplacingBotPRIChanged(self) -> None: ...

    # void PriWrapper::OnTeamChanged() [member function]
    def OnTeamChanged(self) -> None: ...

    # void PriWrapper::ClearBotReplacement() [member function]
    def ClearBotReplacement(self) -> None: ...

    # void PriWrapper::ReportCheater(std::string Reason) [member function]
    def ReportCheater(self, Reason: str) -> None: ...

    # bool PriWrapper::ValidateLoadoutTeamPaints() [member function]
    def ValidateLoadoutTeamPaints(self) -> bool: ...

    # bool PriWrapper::ValidateLoadoutSlots() [member function]
    def ValidateLoadoutSlots(self) -> bool: ...

    # void PriWrapper::ValidateLoadoutDLC() [member function]
    def ValidateLoadoutDLC(self) -> None: ...

    # void PriWrapper::OnStartVoteToForfeitDisabledChanged() [member function]
    def OnStartVoteToForfeitDisabledChanged(self) -> None: ...

    # void PriWrapper::SetStartVoteToForfeitDisabled(long unsigned int bDisabled) [member function]
    def SetStartVoteToForfeitDisabled(self, bDisabled: bool) -> None: ...

    # void PriWrapper::ServerVoteToForfeit() [member function]
    def ServerVoteToForfeit(self) -> None: ...

    # void PriWrapper::SetUserCarPreferences(float NewDodgeThreshold, float NewSteeringSensitivity, float NewAirControlSensitivity) [member function]
    def SetUserCarPreferences(self, NewDodgeThreshold: float, NewSteeringSensitivity: float, NewAirControlSensitivity: float) -> None: ...

    # void PriWrapper::ServerSetUserCarPreferences(float NewDodgeThreshold, float NewSteeringSensitivity, float NewAirControlSensitivity) [member function]
    def ServerSetUserCarPreferences(self, NewDodgeThreshold: float, NewSteeringSensitivity: float, NewAirControlSensitivity: float) -> None: ...

    # int PriWrapper::ValidateUserInt(std::string Reason, int NewValue, int Min, int Max) [member function]
    def ValidateUserInt(self, Reason: str, NewValue: int, Min: int, Max: int) -> int: ...

    # float PriWrapper::ValidateUserFloat(std::string Reason, float NewValue, float Min, float Max) [member function]
    def ValidateUserFloat(self, Reason: str, NewValue: float, Min: float, Max: float) -> float: ...

    # void PriWrapper::SetXPInfo(int InTotalXP, int InXPLevel) [member function]
    def SetXPInfo(self, InTotalXP: int, InXPLevel: int) -> None: ...

    # void PriWrapper::SetTotalXP2(int NewXP) [member function]
    def SetTotalXP2(self, NewXP: int) -> None: ...

    # void PriWrapper::OnPawnTypeChanged() [member function]
    def OnPawnTypeChanged(self) -> None: ...

    # void PriWrapper::SetWaitingPlayer(long unsigned int B) [member function]
    def SetWaitingPlayer(self, B: bool) -> None: ...

    # void PriWrapper::SetPawnType2(unsigned char NewPawnType) [member function]
    def SetPawnType2(self, NewPawnType: int) -> None: ...

    # bool PriWrapper::IsPlayer() [member function]
    def IsPlayer(self) -> bool: ...

    # bool PriWrapper::IsEditor() [member function]
    def IsEditor(self) -> bool: ...

    # bool PriWrapper::IsSpectator() [member function]
    def IsSpectator(self) -> bool: ...

    # void PriWrapper::ServerSpectate() [member function]
    def ServerSpectate(self) -> None: ...

    # void PriWrapper::ClientChangeTeamFailed(int TeamNum) [member function]
    def ClientChangeTeamFailed(self, TeamNum: int) -> None: ...

    # void PriWrapper::ServerChangeTeam(int TeamNum) [member function]
    def ServerChangeTeam(self, TeamNum: int) -> None: ...

    # void PriWrapper::ReplicatePodiumTitles() [member function]
    def ReplicatePodiumTitles(self) -> None: ...

    # void PriWrapper::OnMatchAdmin() [member function]
    def OnMatchAdmin(self) -> None: ...

    # void PriWrapper::OnMVPChange() [member function]
    def OnMVPChange(self) -> None: ...

    # void PriWrapper::NotifyWonMVP() [member function]
    def NotifyWonMVP(self) -> None: ...

    # bool PriWrapper::IsInvalidName() [member function]
    def IsInvalidName(self) -> bool: ...

    # bool PriWrapper::IsInWarmUpMode() [member function]
    def IsInWarmUpMode(self) -> bool: ...

    # void PriWrapper::SetReady(long unsigned int bNewReady) [member function]
    def SetReady(self, bNewReady: bool) -> None: ...

    # void PriWrapper::ServerMatchAdminSetPaused(long unsigned int bPause) [member function]
    def ServerMatchAdminSetPaused(self, bPause: bool) -> None: ...

    # void PriWrapper::ServerMatchAdminSetScoreAndTime(int NewScoreTeam0, int NewScoreTeam1, int SecondsRemaining, long unsigned int bOverTime, long unsigned int bRestartRound) [member function]
    def ServerMatchAdminSetScoreAndTime(self, NewScoreTeam0: int, NewScoreTeam1: int, SecondsRemaining: int, bOverTime: bool, bRestartRound: bool) -> None: ...

    # void PriWrapper::SetMatchAdmin(long unsigned int bIsMatchAdmin) [member function]
    def SetMatchAdmin(self, bIsMatchAdmin: bool) -> None: ...

    # void PriWrapper::ServerReadyUp() [member function]
    def ServerReadyUp(self) -> None: ...

    # bool PriWrapper::ShouldBroadCastWelcomeMessage(long unsigned int bExiting) [member function]
    def ShouldBroadCastWelcomeMessage(self, bExiting: bool) -> bool: ...

    # void PriWrapper::UpdateOnlineProductStats() [member function]
    def UpdateOnlineProductStats(self) -> None: ...

    # void PriWrapper::SetWaitingStartTime2() [member function]
    def SetWaitingStartTime2(self) -> None: ...

    # void PriWrapper::OnRespawnTimeRemainingChanged() [member function]
    def OnRespawnTimeRemainingChanged(self) -> None: ...

    # void PriWrapper::SetRespawnTime2(int NewTime) [member function]
    def SetRespawnTime2(self, NewTime: int) -> None: ...

    # void PriWrapper::ClientScoredGoal(Vector & BallHitLocation) [member function]
    def ClientScoredGoal(self, BallHitLocation: Vector) -> None: ...

    # void PriWrapper::OnScoredGoal(Vector & BallHitLocation) [member function]
    def OnScoredGoal(self, BallHitLocation: Vector) -> None: ...

    # void PriWrapper::OnRep_SteeringSensitivity() [member function]
    def OnRep_SteeringSensitivity(self) -> None: ...

    # void PriWrapper::OnRep_ClientScorePoint() [member function]
    def OnRep_ClientScorePoint(self) -> None: ...

    # void PriWrapper::ResetScore() [member function]
    def ResetScore(self) -> None: ...

    # void PriWrapper::RemovePoints(int Points) [member function]
    def RemovePoints(self, Points: int) -> None: ...

    # void PriWrapper::ScorePoint2(int AdditionalScore) [member function]
    def ScorePoint2(self, AdditionalScore: int) -> None: ...

    # bool PriWrapper::CanAwardTimeRestrictedStatEvent() [member function]
    def CanAwardTimeRestrictedStatEvent(self) -> bool: ...

    # void PriWrapper::RecordTimeRestrictedStatEvent() [member function]
    def RecordTimeRestrictedStatEvent(self) -> None: ...

    # void PriWrapper::ResetTimeRestrictedStatEvent() [member function]
    def ResetTimeRestrictedStatEvent(self) -> None: ...

    # int PriWrapper::GetMatchXP() [member function]
    def GetMatchXP(self) -> int: ...

    # void PriWrapper::CommitStats() [member function]
    def CommitStats(self) -> None: ...

    # void PriWrapper::UpdateFromLoadout() [member function]
    def UpdateFromLoadout(self) -> None: ...

    # void PriWrapper::UpdateUserCarPreferences(AirControlComponentWrapper AirControlComponent) [member function]
    def UpdateUserCarPreferences(self, AirControlComponent: AirControlComponentWrapper) -> None: ...

    # void PriWrapper::HandleAirControl(AirControlComponentWrapper AirControlComp) [member function]
    def HandleAirControl(self, AirControlComp: AirControlComponentWrapper) -> None: ...

    # void PriWrapper::SetCar2(CarWrapper NewCar) [member function]
    def SetCar2(self, NewCar: CarWrapper) -> None: ...

    # bool PriWrapper::IsClientPlayerPRI() [member function]
    def IsClientPlayerPRI(self) -> bool: ...

    # bool PriWrapper::IsLocalPlayerPRI() [member function]
    def IsLocalPlayerPRI(self) -> bool: ...

    # void PriWrapper::Unregister() [member function]
    def Unregister(self) -> None: ...

    # void PriWrapper::AddLocalPlayerToGameEvent() [member function]
    def AddLocalPlayerToGameEvent(self) -> None: ...

    # void PriWrapper::OnLoadoutsSetInternal() [member function]
    def OnLoadoutsSetInternal(self) -> None: ...

    # bool PriWrapper::AreLoadoutsSet() [member function]
    def AreLoadoutsSet(self) -> bool: ...

    # void PriWrapper::OnLoadoutsOnlineSet() [member function]
    def OnLoadoutsOnlineSet(self) -> None: ...

    # void PriWrapper::OnLoadoutsSet2() [member function]
    def OnLoadoutsSet2(self) -> None: ...

    # void PriWrapper::RemoveCertifiedProductStat(long long unsigned int InstanceID) [member function]
    def RemoveCertifiedProductStat(self, InstanceID: int) -> None: ...

    # void PriWrapper::InitLoadoutAttributesForTeam(PriXWrapper PRI) [member function]
    def InitLoadoutAttributesForTeam(self, PRI: PriXWrapper) -> None: ...

    # bool PriWrapper::ShouldValidateOnlineProducts() [member function]
    def ShouldValidateOnlineProducts(self) -> bool: ...

    # void PriWrapper::OnSplitScreenStatusChanged() [member function]
    def OnSplitScreenStatusChanged(self) -> None: ...

    # void PriWrapper::ServerSplitScreenStatusChanged(long unsigned int bInSplitScreen) [member function]
    def ServerSplitScreenStatusChanged(self, bInSplitScreen: bool) -> None: ...

    # void PriWrapper::UpdateSplitScreenStatus() [member function]
    def UpdateSplitScreenStatus(self) -> None: ...

    # void PriWrapper::OnPartyLeaderChanged() [member function]
    def OnPartyLeaderChanged(self) -> None: ...

    # void PriWrapper::ServerSetPartyLeader(SteamID & InPartyLeader, long unsigned int bInParty) [member function]
    def ServerSetPartyLeader(self, InPartyLeader: SteamID, bInParty: bool) -> None: ...

    # void PriWrapper::SetPartyLeader2(SteamID & InPartyLeader, long unsigned int bInParty) [member function]
    def SetPartyLeader2(self, InPartyLeader: SteamID, bInParty: bool) -> None: ...

    # void PriWrapper::UpdatePartyStatus() [member function]
    def UpdatePartyStatus(self) -> None: ...

    # void PriWrapper::OnSkillTierChanged() [member function]
    def OnSkillTierChanged(self) -> None: ...

    # void PriWrapper::ReplicateSkillTier(int NewTier) [member function]
    def ReplicateSkillTier(self, NewTier: int) -> None: ...

    # void PriWrapper::OnTitleChanged() [member function]
    def OnTitleChanged(self) -> None: ...

    # void PriWrapper::SyncPlayerTitle() [member function]
    def SyncPlayerTitle(self) -> None: ...

    # void PriWrapper::UpdateTitleFromLoadout() [member function]
    def UpdateTitleFromLoadout(self) -> None: ...

    # void PriWrapper::UpdateTitle2() [member function]
    def UpdateTitle2(self) -> None: ...

    # void PriWrapper::GetNewFriendKey() [member function]
    def GetNewFriendKey(self) -> None: ...

    # void PriWrapper::ServerSetPlayerHistoryKey(unsigned char * HistoryKeyArray) [member function]
    def ServerSetPlayerHistoryKey(self, HistoryKeyArray: str) -> None: ...

    # void PriWrapper::OnRep_UniqueId() [member function]
    def OnRep_UniqueId(self) -> None: ...

    # void PriWrapper::EventOwnerChanged(PriWrapper PRI) [member function]
    def EventOwnerChanged(self, PRI: PriWrapper) -> None: ...

    # void PriWrapper::EventSpectatorShortcutChanged(PriWrapper PRI) [member function]
    def EventSpectatorShortcutChanged(self, PRI: PriWrapper) -> None: ...

    # void PriWrapper::EventServerAchievementProgression(PriWrapper PRI, int AchievementId, unsigned char AchievementType, float Progress, float MaxProgress) [member function]
    def EventServerAchievementProgression(self, PRI: PriWrapper, AchievementId: int, AchievementType: int, Progress: float, MaxProgress: float) -> None: ...

    # void PriWrapper::EventStartVoteToForfeitDisabledChanged(PriWrapper PRI) [member function]
    def EventStartVoteToForfeitDisabledChanged(self, PRI: PriWrapper) -> None: ...

    # void PriWrapper::EventCarPreUpdate(PriWrapper PRI) [member function]
    def EventCarPreUpdate(self, PRI: PriWrapper) -> None: ...

    # void PriWrapper::EventVanityChanged() [member function]
    def EventVanityChanged(self) -> None: ...

    # Private:
    # PriWrapper::Impl [class declaration]

    # PriWrapper::pimpl [variable]
    @property
    def pimpl(self) -> Any: ...


