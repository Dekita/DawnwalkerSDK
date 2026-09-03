#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERebelHLTreeTransitionPriority.h"
#include "RebelHLTreeEvent.h"
#include "RebelHLTreeStateLink.h"
#include "RebelHLTreeNodeBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELHLTREEMODULE_API URebelHLTreeNodeBlueprintBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CachedOwner;
    
public:
    URebelHLTreeNodeBlueprintBase();

    UFUNCTION(BlueprintCallable)
    void SendEvent(const FRebelHLTreeEvent& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransition(const FRebelHLTreeStateLink& TargetState, const ERebelHLTreeTransitionPriority Priority);
    
};

