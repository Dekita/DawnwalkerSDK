#pragma once
#include "CoreMinimal.h"
#include "RebelAIControllerBase.h"
#include "RebelAITestController.generated.h"

UCLASS(Blueprintable)
class REBELAI_API URebelAITestController : public URebelAIControllerBase {
    GENERATED_BODY()
public:
    URebelAITestController();

    UFUNCTION(BlueprintCallable)
    bool CompareResult(const TArray<FString>& Categories, const FString& ExpectedResult, TArray<FString>& OutErrors, const bool bDesynchronizedTaskExpected, const int32 DesynchronizedTaskSearchRange);
    
};

