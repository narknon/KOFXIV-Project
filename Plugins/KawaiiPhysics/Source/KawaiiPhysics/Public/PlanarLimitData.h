#pragma once
#include "CoreMinimal.h"
#include "CollisionLimitDataBase.h"
#include "UObject/NoExportTypes.h"
#include "PlanarLimitData.generated.h"

USTRUCT(BlueprintType)
struct FPlanarLimitData : public FCollisionLimitDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlane Plane;
    
    KAWAIIPHYSICS_API FPlanarLimitData();
};

