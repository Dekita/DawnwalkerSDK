#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EActiveAbilitiesFunctionalityType.h"
#include "OnFunctionalitiesChangedDelegate.h"
#include "ActiveAbilitiesUISubsystem.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UActiveAbilitiesUISubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFunctionalitiesChanged OnFunctionalitiesChanged;
    
    UActiveAbilitiesUISubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFunctionalityEnabled(EActiveAbilitiesFunctionalityType Functionality) const;
    
};

