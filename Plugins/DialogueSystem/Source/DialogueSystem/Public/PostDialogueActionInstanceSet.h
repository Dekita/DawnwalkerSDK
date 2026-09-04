#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "PostDialogueActionInstanceSet.generated.h"

USTRUCT(BlueprintType)
struct FPostDialogueActionInstanceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> PostDialogueActions;
    
    DIALOGUESYSTEM_API FPostDialogueActionInstanceSet();
};

