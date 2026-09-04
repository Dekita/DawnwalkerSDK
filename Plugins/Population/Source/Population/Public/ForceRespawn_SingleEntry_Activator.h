#pragma once
#include "CoreMinimal.h"
#include "CommunityBaseActivator.h"
#include "ForceRespawn_SingleEntry_Activator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POPULATION_API UForceRespawn_SingleEntry_Activator : public UCommunityBaseActivator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryName;
    
public:
    UForceRespawn_SingleEntry_Activator();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetEntryNameOptions() const;
    
};

