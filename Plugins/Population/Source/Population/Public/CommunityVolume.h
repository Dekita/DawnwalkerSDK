#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "CommunityVolume.generated.h"

class UCommunityBaseActivator;
class UDataTable;

UCLASS(Blueprintable)
class POPULATION_API ACommunityVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommunityBaseActivator*> InitialActivators;
    
public:
    ACommunityVolume(const FObjectInitializer& ObjectInitializer);

};

