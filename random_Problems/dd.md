DROP TABLE IF EXISTS Goals;
CREATE TABLE Goals (
    player TEXT,
    team TEXT,
    goals_scored BIGINT,
    played BIGINT
);
INSERT INTO Goals VALUES
    ("Lionel Messi", "Barcelona", 30, 35);SELECT player,team,MAX(goals_scored),played as highest goals FROM Goals