#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFloatChannelSerializationHelper.h"
#include "MovieSceneSection.h"
#include "Curves/RichCurve.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneAkAudioRTPCSection.generated.h"

class UAkRtpc;

UCLASS(Blueprintable)
class AKAUDIO_API UMovieSceneAkAudioRTPCSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RTPC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FRichCurve FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel RTPCChannel;
    
public:
    UMovieSceneAkAudioRTPCSection();
};

