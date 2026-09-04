#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BodyTypeMontagePair.h"
#include "CommunityObjectSlotComponent.h"
#include "ActionSlotComponent.generated.h"

class UActionPreviewActorComponent;
class UAnimBlueprint;
class UAnimMontage;
class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class POPULATION_API UActionSlotComponent : public UCommunityObjectSlotComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RestrictedSituations;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WorkCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultBodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBodyTypeMontagePair> AnimMontagePerBodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoadedMontage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActionPreviewActorComponent* PreviewMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimBlueprint> PreviewBlueprint;
    
public:
    UActionSlotComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetWorkCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetLoadedAnimMontage() const;
    
};

