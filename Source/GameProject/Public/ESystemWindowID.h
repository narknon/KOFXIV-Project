#pragma once
#include "CoreMinimal.h"
#include "ESystemWindowID.generated.h"

UENUM(BlueprintType)
enum class ESystemWindowID : uint8 {
    NONE,
    SaveCheck,
    BackToMainMenu,
    DJStationToMainMenu,
    BackToMemberSelect,
    BackToOrderSelect,
    BackToCloneBattleTop,
    BackToTrialMenu,
    BackToTutorialMenu,
    BackToRankMatch,
    BackToCasualMatch,
    BackToRoom,
    BackToCustomList,
    ReplayEnd,
    DeleteRecordingCheck,
    ConnectionError,
    ControllerDisConnectionXSX,
    ProfileUserChangeXSX,
    ProfileStartGameXSX,
    BattleSettingSaveCheck,
    LoginError,
    BattleOtherDisconnection,
    BattleOtherDisconnectionTop,
    BattleOtherDisconnectionPartyVS,
    BattleOtherDisconnectionRoomMatch,
    InviteEnteredRoom,
    SearchingForOpponent,
    MissingOpponent,
    NotSatisfied,
    RankTutorial0,
    RankTutorial1,
    RankTutorial_Skip0,
    RankTutorial_Skip1,
    TutorialProgress,
    CreatingRoom,
    RoomIsFull,
    NotCreateRoom,
    SearchingRoom,
    RoomNotFound,
    NotObtainedRoomInformation,
    RoomIsDisbanded,
    LeaveTheRoom,
    ReturnToRoom,
    HostLeaveTheRoom,
    NoResponseLeaveTheRoom,
    RoomJoinFailed,
    IsKickThisPlayer,
    Kicked,
    KickedRoom,
    NotKickIt,
    IsGiveHost,
    TransferredHost,
    ReceivedTheHost,
    TakeBreak,
    LeaveBattleSeat,
    SettingSaved,
    CustomListAllReset,
    ReplayDescriptionPage1,
    ReplayDescriptionPage2,
    NoReplayData,
    DownloadReplayError,
    NoReplayVersion,
    DeleteThisReplay,
    DeleteThisReplayComp,
    DeleteCheckedReplay,
    DeleteCheckedReplayComp,
    UploadThisReplay,
    UploadThisReplayComp,
    ThisReplayIsNotViewing,
    NotPlayGoItem,
    ResetToDefault,
    DoNotSaveToMainMenu,
    DoNotSaveCloseWindows,
    PlayerListClear,
    PlayerListAllClear,
    OccurredError,
    CommunicationDisconnection,
    NoneData,
    MaxFollowers,
    SyncFailure,
    WasDecreasedScore,
    WasIncurredPenalty,
    WasRecoverdScore,
    WasLiftedPenaltyAsTimeAdvances,
    WasLiftedPenaltyAsBattleCompletion,
    DJStationSaveCheck,
    Private,
    NetworkNotAvailable,
    OnlineCheckFailed,
    GameFinished,
    GameForceExit,
    GotoTitle,
    FailedValidateLicense,
    ConfirmSaveDelete,
    StoreDLC,
    RewardStage,
    RewardBGM,
    RewardCostume,
    RewardNetworkTitle,
    RankmatchToomanyCountdownComplete,
    UNKNOWN,
};
