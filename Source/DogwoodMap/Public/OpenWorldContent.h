#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "OpenWorldContentGroup.h"
#include "OpenWorldContent.generated.h"

class UWorld;

UCLASS(Blueprintable)
class DOGWOODMAP_API UOpenWorldContent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RegionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOpenWorldContentGroup> Groups;
    
    UOpenWorldContent();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetOpenWorldMappinTypeNames();
    
};

