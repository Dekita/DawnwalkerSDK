#pragma once
#include "CoreMinimal.h"
#include "BaseActorSelector.h"
#include "CommunityActorSelector.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UCommunityActorSelector : public UBaseActorSelector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorSpawnedByFallback;
    
public:
    UCommunityActorSelector();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetEntryNameOptions() const;
    
};

