#include "testinfo.h"

void TestInfo(LHZS::VRFORCE_ENTITY::ENTITYSTATE_REPORT *pInstance)
{
    if ( !g_EntityInfoFile.isOpen() )
    {
        return;
    }
    QString sEntityName(QByteArray(pInstance->entityName, 32));
    QString sEntityType(QByteArray(pInstance->entityType, 32));
    QStringList sEntityState;

    sEntityState
    << QString("entityID : %1\n").arg(pInstance->entityID)
    << QString("entityName : %1\n").arg(sEntityName)
    << QString("entityIFFCode : %1\n").arg(pInstance->entityIFFCode)
    << QString("entityClass : %1\n").arg(pInstance->entityClass)
    << QString("entityModel : %1\n").arg(pInstance->entityModel)
    << QString("entityType : %1\n").arg(sEntityType)
    << QString("timeOfUpdate : %1\n").arg(pInstance->timeOfUpdate)
    << QString("damageState : %1\n").arg(pInstance->damageState)
    << QString("geodeticLocationLon : %1\n").arg(pInstance->geodeticLocationLon)
    << QString("geodeticLocationLat : %1\n").arg(pInstance->geodeticLocationLat)
    << QString("geodeticLocationAlt : %1\n").arg(pInstance->geodeticLocationAlt)
    << QString("topographicVelocityX : %1\n").arg(pInstance->topographicVelocityX)
    << QString("topographicVelocityY : %1\n").arg(pInstance->topographicVelocityY)
    << QString("topographicVelocityZ : %1\n").arg(pInstance->topographicVelocityZ)
    << QString("topographicAccelerationX : %1\n").arg(pInstance->topographicAccelerationX)
    << QString("topographicAccelerationY : %1\n").arg(pInstance->topographicAccelerationY)
    << QString("topographicAccelerationZ : %1\n").arg(pInstance->topographicAccelerationZ)
    << QString("topographicPsi : %1\n").arg(pInstance->topographicPsi)
    << QString("topographicTheta : %1\n").arg(pInstance->topographicTheta)
    << QString("topographicPhi : %1\n").arg(pInstance->topographicPhi)
    << QString("rotationalVelocityX : %1\n").arg(pInstance->rotationalVelocityX)
    << QString("rotationalVelocityY : %1\n").arg(pInstance->rotationalVelocityY)
    << QString("rotationalVelocityZ : %1\n").arg(pInstance->rotationalVelocityZ)
    << QString("sizeOfGroup : %1\n").arg(pInstance->sizeOfGroup)
    << QString("platId : %1\n\n\n").arg(pInstance->platId);
    for (int i = 0; i < sEntityState.count(); i++)
    {
        g_TestMutex.lock();
        g_EntityInfoFile.write(sEntityState[i].toUtf8());
        g_TestMutex.unlock();
    }
}

void TestInfo(LHZS::SDI_TRACK_REPORT *pInstance)
{
    if ( !g_TrackInfoFile.isOpen() )
    {
        return;
    }
    QString sCallSign(QByteArray(pInstance->call_sign_c,16));
    QString sSpare(QByteArray(pInstance->spare_c, 24));
    QStringList sTrackState;

    sTrackState
    << QString("%1  ").arg(pInstance->platform_id_ul)
    << QString("%1  ").arg(pInstance->sdi_track_number_ul)
//    << QString("radar_track_number_uh : %1\n").arg(pInstance->radar_track_number_uh)
//    << QString("ssr_track_number_uh : %1\n").arg(pInstance->ssr_track_number_uh)
//    << QString("esm_target_number_uh : %1\n").arg(pInstance->esm_target_number_uh)
//    << QString("csm_target_number_uh : %1\n").arg(pInstance->csm_target_number_uh)
//    << QString("ir_target_number_uh : %1\n").arg(pInstance->ir_target_number_uh)
//    << QString("icao_addr_ul : %1\n").arg(pInstance->icao_addr_ul)
//    << QString("ais_mmsi_ul : %1\n").arg(pInstance->ais_mmsi_ul)
//    << QString("call_sign_c : %1\n").arg(sCallSign)
//    << QString("net_obj_addr_uh : %1\n").arg(pInstance->net_obj_addr_uh)
//    << QString("track_status_e : %1\n").arg(pInstance->track_status_e)
//    << QString("track_quality_uh : %1\n").arg(pInstance->track_quality_uh)
//    << QString("track_source_e : %1\n").arg(pInstance->track_source_e)
    << QString("%1  ").arg(pInstance->target_geo_position.alt_f)
    << QString("%1  ").arg(pInstance->target_geo_position.lat_f)
    << QString("%1  ").arg(pInstance->target_geo_position.lon_f)
//    << QString("arget_velocity.platform_vx_f : %1\n").arg(pInstance->target_velocity.platform_vx_f)
//    << QString("target_velocity.platform_vy_f : %1\n").arg(pInstance->target_velocity.platform_vy_f)
//    << QString("target_velocity.platform_vz_f : %1\n").arg(pInstance->target_velocity.platform_vz_f)
//    << QString("speed_f : %1\n").arg(pInstance->speed_f)
//    << QString("heading_f : %1\n").arg(pInstance->heading_f)
//    << QString("mission_type_e : %1\n").arg(pInstance->mission_type_e)
//    << QString("threat_level_e : %1\n").arg(pInstance->threat_level_e)
//    << QString("formation_size_uh : %1\n").arg(pInstance->formation_size_uh)
//    << QString("maneuver_indicator_e : %1\n").arg(pInstance->maneuver_indicator_e)
    << QString("%1\n").arg(pInstance->time_of_update_ul);
//    << QString("spare_c : %1\n\n").arg(sSpare);
    for (int i = 0; i < sTrackState.count(); i++)
    {
        g_TestMutex.lock();
        g_TrackInfoFile.write(sTrackState[i].toUtf8());
        g_TestMutex.unlock();
    }
}

void TestInit()
{
    g_EntityInfoFile.setFileName("g_EntityInfoFile.txt");
    g_EntityInfoFile.open(QIODevice::WriteOnly | QIODevice::Text);

    g_TrackInfoFile.setFileName("g_TrackInfoFile.txt");
    g_TrackInfoFile.open(QIODevice::WriteOnly | QIODevice::Text);
}

void TestFree()
{
    g_EntityInfoFile.close();
    g_TrackInfoFile.close();
}
