#pragma once

#include "test_replay.h"
#include "MyGameHelper.h"
#include "Kismet/KismetSystemLibrary.h"

UMyGameHelper::UMyGameHelper(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UMyGameHelper::PauseDemo(UObject*obj, bool b)
{
	if (obj == NULL)
		return;

	UWorld* w = obj->GetWorld();

	AWorldSettings* ws = w == NULL ? NULL : w->GetWorldSettings();

	if (b)
	{
		if (ws->Pauser == NULL)
		{
			UKismetSystemLibrary::ExecuteConsoleCommand(obj, TEXT("DEMOPAUSE"));
		}
	}
	else
	{
		if (ws->Pauser != NULL)
		{
			//UKismetSystemLibrary::ExecuteConsoleCommand(obj, TEXT("DEMOPAUSE"));
			ws->Pauser = NULL;
		}
	}
}