#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelFormationDataDefinition.h"
#include "DawnwalkerTransportAreaSizePerAlertLevel.h"
#include "Templates/SubclassOf.h"
#include "DawnwalkerTransportDefinition.generated.h"

class UAIReactionsConfig;
class URebelFormationGroupDefinition;

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerTransportDefinition : public URebelFormationDataDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TransportAIFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelFormationGroupDefinition* GroupDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelFormationGroupDefinition* TransportDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIReactionsConfig> ReactionConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBasedOnAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransportGuardAreaSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransportAggressionAreaSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransportCombatArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerTransportAreaSizePerAlertLevel TransportGuardAreaSizePerAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerTransportAreaSizePerAlertLevel TransportAggressionAreaSizePerAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerTransportAreaSizePerAlertLevel TransportCombatAreaPerAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemovePawnsOnDefeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetTransportAfterDefeat;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ResetAfterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransportActiveCombatAreaSize;
    
    UDawnwalkerTransportDefinition();

};

