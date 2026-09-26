export type SystemState = 'AUTO' | 'REMOTE' | 'OPERATOR' | 'EMERGENCY';

export interface TelemetryData {
  id?: string;
  created_at?: string;
  temperature: number;
  humidity: number;
  fan_speed_pwm: number; // 
  state: SystemState;
  temp_threshold: number; // 
  is_emergency: boolean;
  app_connected: boolean;
  device_id: string;
}

export interface FanControlCommand {
  target_state: SystemState;
  pwm_speed: number;
  temp_threshold?: number;
  device_id: string;
}
