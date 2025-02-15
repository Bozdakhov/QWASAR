require 'date'

def my_data_transform(csv_content)
  rows = csv_content.split("\n")
  headers = rows[0].split(",")
  new_rows = [headers.join(",")]

  rows[1..-1].each do |row|
    fields = row.split(",")
    email_provider = fields[4].split("@")[1]
    age_group = case fields[5].to_i
                when 1..20
                  "1->20"
                when 21..40
                  "21->40"
                when 41..65
                  "41->65"
                else
                  "66->99"
                end
    order_time = DateTime.parse(fields[9], '%Y-%m-%d %H:%M:%S')
    order_group = case order_time.hour
                  when 6..11
                    "morning"
                  when 12..17
                    "afternoon"
                  else
                    "evening"
                  end

    new_row = [fields[0], fields[1], fields[2], fields[3], email_provider, age_group, fields[6], fields[7], fields[8], order_group]
    new_rows << new_row.join(",")
  end

  return new_rows
end

