#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActorReferenceType.h"
#include "PlayerReference.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODSYSTEM_API UPlayerReference : public UActorReferenceType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
public:
    UPlayerReference();

};

