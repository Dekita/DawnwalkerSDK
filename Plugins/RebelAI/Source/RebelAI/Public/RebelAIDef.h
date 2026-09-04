#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIDefinition.h"
#include "RebelAICharacterState.h"
#include "RebelAIEquipmentSlotAlias.h"
#include "RebelAIEquipmentSlotMapping.h"
#include "RebelAITrait_Aggression.h"
#include "RebelAITrait_TickerUser.h"
#include "RebelAITrait_TicketBoard.h"
#include "Templates/SubclassOf.h"
#include "RebelAIDef.generated.h"

class URebelAIBoard;
class URebelAIConfig;
class URebelAIPerceptionProfile;
class URebelAIServiceTree;
class URebelAIStubEquipmentProxy;
class URebelGenericTree;

UCLASS(Blueprintable)
class REBELAI_API URebelAIDef : public UAIDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelAIBoard> AIBoardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelAIStubEquipmentProxy> AIStubEquipmentProxyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIPerceptionProfile* PerceptionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIServiceTree* ServiceTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelGenericTree* LogicTreeGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelGenericTree* AssetTreeGeneric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAICharacterState> CharacterStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelAIConfig> Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAITrait_Aggression Aggression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTicketBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAITrait_TicketBoard TicketBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTicketUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAITrait_TickerUser TicketUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAIEquipmentSlotAlias> EquipmentSlotAliases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAIEquipmentSlotMapping> EquipmentSlotMapping;
    
    URebelAIDef();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIConfig* GetAIConfig() const;
    
};

