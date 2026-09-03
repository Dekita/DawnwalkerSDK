#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RebelAINodeHandle.h"
#include "RebelAILogicTree_BlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class REBELAI_API URebelAILogicTree_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelAILogicTree_BlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FRebelAINodeHandle& NodeHandle);
    
};

