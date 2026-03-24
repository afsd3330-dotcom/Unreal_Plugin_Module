#include "MySpartaLog.h"
#include "Modules/ModuleManager.h"

DEFINE_LOG_CATEGORY(LogMySparta);

void FMySpartaLogModule::StartupModule()
{
    UE_LOG(LogMySparta, Warning, TEXT("MySpartaLog is Start"));
}

void FMySpartaLogModule::ShutdownModule()
{

}
IMPLEMENT_MODULE(FMySpartaLogModule, MySpartaLog)