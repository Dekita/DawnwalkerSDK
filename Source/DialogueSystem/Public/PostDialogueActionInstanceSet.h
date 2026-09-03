#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "PostDialogueActionInstanceSet.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FPostDialogueActionInstanceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> PostDialogueActions;
    
    FPostDialogueActionInstanceSet();
};

