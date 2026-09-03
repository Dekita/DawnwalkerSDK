#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CreditsSubsystem.generated.h"

class UCreditsData;

UCLASS(Blueprintable)
class DOGWOODUI_API UCreditsSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCreditsEventDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreditsEventDelegate OnCreditsStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreditsEventDelegate OnCreditsEnded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCreditsData* ShowedCreditsData;
    
public:
    UCreditsSubsystem();

    UFUNCTION(BlueprintCallable)
    bool ShowCustomCredits(const UCreditsData* CreditsData);
    
    UFUNCTION(BlueprintCallable)
    bool ShowCredits();
    
    UFUNCTION(BlueprintCallable)
    void NotifyCreditsStarted();
    
    UFUNCTION(BlueprintCallable)
    void NotifyCreditsEnded();
    
};

