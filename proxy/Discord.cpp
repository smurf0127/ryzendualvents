#include "discord.h"
#include<time.h>
#include<spdlog/spdlog.h>
#include<discord_register.h>




void init_discord() {
    DiscordEventHandlers handlers;
    memset(&handlers, 0, sizeof(handlers));

    Discord_Initialize("948006665251328040", &handlers, 1, NULL);
}


void update_rpc(const std::string& ingame)
{

    DiscordRichPresence presence;
    memset(&presence, 0, sizeof(presence));

    presence.state = "Licensed Role: Premium Proxy User";

    presence.largeImageKey = "img_1439";
    presence.largeImageText = "https://discord.gg/aqkhTScxnK";
    presence.smallImageKey = "724322-middle";
    presence.smallImageText = "https://discord.gg/aqkhTScxnK";
    presence.startTimestamp = time(nullptr);

    presence.details = ingame.c_str();


    Discord_UpdatePresence(&presence);
}

