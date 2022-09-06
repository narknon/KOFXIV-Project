#pragma once
#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiNoteOnOff.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiNoteOnOff : public FAkMidiEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Note;
    
    UPROPERTY(EditAnywhere)
    uint8 Velocity;
    
    AKAUDIO_API FAkMidiNoteOnOff();
};

