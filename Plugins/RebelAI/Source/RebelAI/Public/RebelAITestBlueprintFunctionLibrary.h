#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RebelAITestBlueprintFunctionLibrary.generated.h"

class URebelAIStub;
class URebelGenericTree;

UCLASS(Blueprintable)
class REBELAI_API URebelAITestBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelAITestBlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void Test_StopLogicTreeTest(URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable)
    static void Test_SetupLogicTreeTest(URebelAIStub* AIStub, URebelGenericTree* InLogicTree);
    
    UFUNCTION(BlueprintCallable)
    static void Test_KillStub(URebelAIStub* AIStub);
    
};

