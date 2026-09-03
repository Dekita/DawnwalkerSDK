#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "GameplayWidgetComponent.generated.h"

class UUIManagerSubsystem;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODUI_API UGameplayWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManagerSubsystem* CachedUIManager;
    
public:
    UGameplayWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

