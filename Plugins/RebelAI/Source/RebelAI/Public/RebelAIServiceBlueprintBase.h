#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelAIEvent.h"
#include "RebelAIServiceBlueprintBase.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URebelAIServiceBlueprintBase : public UObject {
    GENERATED_BODY()
public:
    URebelAIServiceBlueprintBase();

protected:
    UFUNCTION(BlueprintCallable)
    void BP_Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEvent(const FRebelAIEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* BP_GetOwnerAs(UClass* Class) const;
    
};

