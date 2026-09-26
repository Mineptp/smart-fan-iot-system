const { createClient } = require('@supabase/supabase-js');
require('dotenv').config();

/**
 * Supabase Connection Setup Pattern (Template)
 * Initializes and exports the Supabase Client instance for database operations.
 */

const SUPABASE_URL = process.env.SUPABASE_URL || 'https://your-project.supabase.co';
const SUPABASE_KEY = process.env.SUPABASE_KEY || 'your-supabase-anon-key';

// Initialize Supabase Client
const supabase = createClient(SUPABASE_URL, SUPABASE_KEY);

module.exports = supabase;
