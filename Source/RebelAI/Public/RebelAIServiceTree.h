#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "Engine/DataAsset.h"
#include "RebelAIServiceTree.generated.h"

UCLASS(Blueprintable)
class REBELAI_API URebelAIServiceTree : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Services;
    
    URebelAIServiceTree();

};

