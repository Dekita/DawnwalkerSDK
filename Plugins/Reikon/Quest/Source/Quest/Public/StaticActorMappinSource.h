#pragma once
#include "CoreMinimal.h"
#include "MappinSource.h"
#include "StaticActorMappinSource.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class QUEST_API UStaticActorMappinSource : public UMappinSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
public:
    UStaticActorMappinSource();

};

