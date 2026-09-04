#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EDismemberLimb.h"
#include "DismembermentBoneMap.generated.h"

UCLASS(Blueprintable)
class UDismembermentBoneMap : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDismemberLimb, FName> LimbToBoneMap;
    
    UDismembermentBoneMap();

};

