#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DawnwalkerCharacterSocketConfig.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerCharacterSocketConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FInstancedStruct> Sockets;
    
    UDawnwalkerCharacterSocketConfig();

};

