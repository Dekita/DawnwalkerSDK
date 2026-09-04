#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "Animation/AnimMetaData.h"
#include "DawnwalkerTraversalAnimMetaData.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UDawnwalkerTraversalAnimMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> ExtraData;
    
    UDawnwalkerTraversalAnimMetaData();

};

