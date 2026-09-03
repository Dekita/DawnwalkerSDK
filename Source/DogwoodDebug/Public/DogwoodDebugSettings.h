#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "DogwoodDebugSettings.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODDEBUG_API UDogwoodDebugSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath NetImGuiServerPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> KillEffectClass;
    
    UDogwoodDebugSettings();

};

