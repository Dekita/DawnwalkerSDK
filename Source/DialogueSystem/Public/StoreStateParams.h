#pragma once
#include "CoreMinimal.h"
#include "StoreStateParams.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FStoreStateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UScriptStruct*> SkipRestoreStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UScriptStruct*> AdditionalStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UScriptStruct*> SkipStates;
    
    FStoreStateParams();
};

